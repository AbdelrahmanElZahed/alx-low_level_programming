#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: If str == NULL or insufficient memory is available, returns NULL;
 * otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

    /* Check if str is NULL */
	if (str == NULL)
		return (NULL);

    /* Get the length of str */
	len = strlen(str);

    /* Allocate memory for duplicate (+1 for null terminator) */
	duplicate = (char *)malloc(sizeof(char) * (len + 1));

    /* Check if malloc succeeded */
	if (duplicate == NULL)
		return (NULL);

    /* Copy characters from str to duplicate */
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

    /* Add null terminator */
	duplicate[len] = '\0';
	return (duplicate);
}

