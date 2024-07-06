#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurrence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	/* Variable to iterate through the string */
	int index;

	/* Loop through each character in the string */
	for (index = 0; s[index] >= '\0'; index++)
	{
		/* Check if the current character matches c */
		if (s[index] == c)
			return (s + index);
	}

	/* If c is not found, return NULL */
	return ('\0');
}
