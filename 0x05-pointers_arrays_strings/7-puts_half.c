#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int longi = 0;
	int n, a;

	/* Calculate the length of the string */
	while (str[longi] != '\0')
	{
		longi++;
	}

	/* Determine the starting index for printing the second half */
	if (longi % 2 == 0)
	{
		n = longi / 2;
	}
	else
	{
		n = (longi + 1) / 2;
	}

	/* Print the second half of the string */
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}

