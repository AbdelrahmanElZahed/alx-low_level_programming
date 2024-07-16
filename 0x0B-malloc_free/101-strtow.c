#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;
	char *str;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate total length of arguments including newlines */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		total_length++; /* For the newline character */
	}
	/* Allocate memory for the concatenated string */
	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	/* Copy arguments into str and add newlines */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}
	str[k] = '\0'; /* Null-terminate the string */
	return (str);
}
