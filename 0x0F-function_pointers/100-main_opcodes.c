#include <stdio.h>
#include <stdlib.h>

#define ERROR_ARG_COUNT 1
#define ERROR_NEGATIVE_BYTE 2

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char *main_ptr;
	int num_bytes;

	/* Check for correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(ERROR_ARG_COUNT);
	}

	/* Convert argument to integer */
	num_bytes = atoi(argv[1]);

	/* Check for negative number of bytes */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(ERROR_NEGATIVE_BYTE);
	}

	/* Point to the start of the main function */
	main_ptr = (unsigned char *)main;

	/* Print the opcodes in hexadecimal format */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

