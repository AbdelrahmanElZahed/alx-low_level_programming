#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int bit;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	/* Find the highest bit that is set*/
	bit = sizeof(n) * 8 - 1;
	while (bit >= 0 && !(n & (1UL << bit)))
		bit--;

	/* Print the binary representation*/
	while (bit >= 0)
	{
		if (n & (1UL << bit))
			putchar('1');
		else
			putchar('0');
		bit--;
	}
}

