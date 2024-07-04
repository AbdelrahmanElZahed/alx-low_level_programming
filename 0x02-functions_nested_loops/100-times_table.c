#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number to start printing from
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	/* Check if n is within the valid range */
	if (n < 0 || n > 15)
	{
		return;  /* Do nothing if n is out of range */
	}

	/* Iterate from 0 to n and print n times each number */
	for (i = 0; i <= n; i++)
	{
		printf("0"); /* Print the first number in each row */
		for (j = 1; j <= n; j++)
		{
			printf(",");
			printf(" ");

			result = i * j;

			/* Adjust spacing for alignment */
			if (result <= 9)
			{
				printf(" "); /* Single-digit numbers */
				printf(" ");
			}
			else if (result <= 99)
			{
				printf(" "); /* Double-digit numbers */
			}

			printf("%d", result); /* Print the result of multiplication */
		}
		printf("\n"); /* Move to the next line after each row */
	}
}

