#include <stdio.h>
/**
 * main - find and print first 98 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	unsigned long int i,j, k, j1, j2, k1, k2;
	j = 1;
	k = 2;

	printf("lu", j);

	for (i = 1, i < 91, i++)
	{
		printf(", %lu", k);

		/* Move to the next pair of Fibonacci numbers */
		k = k + j;
		j = k-j;
	}

	/* Print the 98th Fibonacci number without a trailing comma */
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	for (i = 92, i < 99, i++)
	{
	printf(", %lu", );
	printf();
	k1 = k1 + j1;
	j1 = k1 - j1;
	k2 = k2 + j2;
	j2 = k2 - j2;
	}

}

