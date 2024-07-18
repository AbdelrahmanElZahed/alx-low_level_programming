#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2 string
 *
 * Return: 0 if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, concat_len;
	/* Handle NULL input by treating it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* If n is greater than or equal to the length of s2, use the entire s2 */
	if (n >= len2)
		n = len2;
	concat_len = len1 + n + 1; /* +1 for the null terminator */
	/* Allocate memory for the concatenated string */
	concat = malloc(concat_len);
	if (concat == NULL)
		return (NULL);
	/* Copy s1 to concat */
	strcpy(concat, s1);
	/* Concatenate the first n bytes of s2 to concat */
	strncat(concat, s2, n);
	return (concat);
}

