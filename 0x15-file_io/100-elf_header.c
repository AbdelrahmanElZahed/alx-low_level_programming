#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - prints an error message and exits with a status code
 * @msg: the error message to print
 * @exit_code: the exit status code
 */
void print_error(const char *msg, int exit_code)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(exit_code);
}

/**
 * print_elf_header - prints the ELF header information
 * @fd: file descriptor of the ELF file
 */
void print_elf_header(int fd)
{
    Elf64_Ehdr header;
    ssize_t bytes_read;
    unsigned int i;
    char *class, *data, *osabi, *type;

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
        print_error("Error: Can't read ELF header", 98);

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    
    class = (header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32";
    data = (header.e_ident[EI_DATA] == ELFDATA2LSB) ? 
            "2's complement, little endian" : "2's complement, big endian";
    osabi = (header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" :
            (header.e_ident[EI_OSABI] == ELFOSABI_NETBSD) ? "UNIX - NetBSD" :
            (header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS) ? "UNIX - Solaris" :
            "<unknown: %02x>";
    type = (header.e_type == ET_EXEC) ? "EXEC (Executable file)" :
           (header.e_type == ET_DYN) ? "DYN (Shared object file)" :
           "<unknown: %02x>";

    printf("  Class:                             %s\n", class);
    printf("  Data:                              %s\n", data);
    printf("  Version:                           %d (current)\n", header.e_version);
    printf("  OS/ABI:                            %s\n", osabi);
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", type);
    printf("  Entry point address:               0x%lx\n", header.e_entry);
}

/**
 * main - entry point for the ELF header program
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 on success, exit with code 98 on error
 */
int main(int argc, char *argv[])
{
    int fd;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename", 97);

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        print_error("Error: Can't open file", 98);

    if (lseek(fd, 0, SEEK_SET) == -1)
        print_error("Error: Can't read file", 98);

    print_elf_header(fd);

    if (close(fd) == -1)
        print_error("Error: Can't close file descriptor", 100);

    return 0;
}

