#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Description: Reverses the string @s in place.
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;

	/* Find the length of the string */
	while (s[counter] != '\0')
		counter++;

	/* Reverse the string */
	for (i = 0; i < counter / 2; i++)
	{
		rev = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = rev;
	}
}

