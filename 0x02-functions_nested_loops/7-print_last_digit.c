#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The number to be checked
 *
 * Return: Value of the last digit of a number
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

