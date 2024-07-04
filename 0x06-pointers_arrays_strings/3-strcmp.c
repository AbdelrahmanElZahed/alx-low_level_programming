#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares strngs values
 * @s1: input value
 * @s2: input value
 *
 * Return: s[1] - s[2]
 */
int _strcmp(char *s1, char *s2)
{
        int i = 0;

        while ((s1[i] != '\0') && (s2[i] != '0'))
        {
                if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
        }
        return (0);
}
