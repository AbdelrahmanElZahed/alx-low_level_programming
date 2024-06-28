#include "main.h"

/**
 * print_line - Print a straight line in the terminal
 * @n: Number of times to print '_'
 *
 * Return: void (no return value)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
