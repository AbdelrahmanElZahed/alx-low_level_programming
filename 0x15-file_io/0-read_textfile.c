#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 *                 standard output.
 * @filename: Pointer to the name of the file to be read.
 * @letters: Number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount
 *         of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                /* File descriptor */
	ssize_t bytes_read;    /* Number of bytes read from the file */
	ssize_t bytes_written; /* Number of bytes written to stdout */
	char *buffer;          /* Buffer to store the file content */

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer to hold the text */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);  /* Close the file before returning */
		return (0);
	}

	/* Read the specified number of letters from the file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);  /* Free the allocated buffer */
		close(fd);     /* Close the file before returning */
		return (0);
	}

	/* Write the read content to the standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);  /* Free the allocated buffer */
		close(fd);     /* Close the file before returning */
		return (0);
	}

	/* Free the allocated buffer and close the file */
	free(buffer);
	close(fd);

	/* Return the number of bytes successfully written to stdout */
	return (bytes_written);
}

