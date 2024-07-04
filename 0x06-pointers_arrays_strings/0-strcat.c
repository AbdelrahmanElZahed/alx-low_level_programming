#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting strind destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return(dest);
}
