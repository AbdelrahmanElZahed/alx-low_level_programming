#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign = 1; /* Initialize sign to positive */
	int digit_found = 0;

	/* Skip whitespace and non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9') && s[i] != '-' && s[i] != '+')
	{
		i++;
	}

	/* Check for sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n > (INT_MAX - (s[i] - '0')) / 10)
		{
			/* Handle overflow */
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		n = n * 10 + (s[i] - '0');
		digit_found = 1;
		i++;
	}

	/* Return 0 if no digits were found */
	if (!digit_found)
	{
		return (0);
	}

	return (sign * n);
}

