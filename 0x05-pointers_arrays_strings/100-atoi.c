#include "main.h"

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

    /* Skip whitespace characters */
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')
    {
        i++;
    }

    /* Check for sign */
    if (s[i] == '-')
    {
        sign = -1; /* Set sign to negative */
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Convert digits to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }

    return sign * n;
}

