#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @i: The number to be computed.
 *
 * Return: Absolute value of a number
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_value;

		abs_value = i * -1;
		return (abs_value);
	}
	return (i);
}

