#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorila of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: factorial of n, or -1 if n is lower than 0 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
