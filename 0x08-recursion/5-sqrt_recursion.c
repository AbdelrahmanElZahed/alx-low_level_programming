#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - returns the value of x raised to the power of y
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 * Return: the natural square root,
 *  or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root,
 *  or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
