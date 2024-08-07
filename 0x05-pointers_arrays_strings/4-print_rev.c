#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Description: Prints each character of the string @s in reverse order,
 *              followed by a newline character ('\n').
 */
void print_rev(char *s)
{
	int longi = 0;
	int n;

	/* Find the length of the string */
	while (*s != '\0')
	{
		longi++;
		s++;
	}

	s--;  /* Move back to the last character of the string */

	/* Print the string in reverse */
	for (n = longi; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

