#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* This line is to avoid unused parameter warning */
	printf("%s\n", argv[0]);
	return (0);
}
