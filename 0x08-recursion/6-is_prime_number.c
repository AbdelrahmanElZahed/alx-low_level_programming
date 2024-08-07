#include "main.h"
#include <stdio.h>
/**
 * is_prime_helper - helper function to check for prime number
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: the number to check
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
