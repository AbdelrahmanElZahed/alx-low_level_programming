#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *endptr;
	unsigned long num1, num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	num1 = strtoul(argv[1], &endptr, 10);
	num2 = strtoul(argv[2], &endptr, 10);
	printf("%lu\n", num1 * num2);
	return (0);
}

