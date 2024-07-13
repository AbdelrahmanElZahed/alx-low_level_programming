#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* This line is to avoid unused parameter warning */
	printf("%d\n", argc - 1);
	return (0);
}
