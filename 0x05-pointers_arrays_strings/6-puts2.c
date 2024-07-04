#include "main.h"

/**
 * puts2 - prints every second character of a string
 * @str: input string
 *
 * Description: Prints every second character of @str
 */
void puts2(char *str)
{
	int longi = 0;
	int n;

	/* Calculate the length of the string */
	while (str[longi] != '\0')
		longi++;

	/* Print every second character starting with the first one */
	for (n = 0; n < longi; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}

