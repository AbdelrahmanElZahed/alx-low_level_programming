#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 *
 * Description: Prints each character of the string @str followed by a newline
 *              character ('\n').
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

