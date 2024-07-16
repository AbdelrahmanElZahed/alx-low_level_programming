#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *result;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++; /* for newline character */
	}
	/* Allocate memory for result string */
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	/* Copy arguments into result string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[index] = av[i][j];
			index++;
			j++;
		}
		if (i < ac - 1) /* Add newline character except for the last argument */
		{
			result[index] = '\n';
			index++;
		}
	}
	result[index] = '\0'; /* Add null terminator */
	return (result);
}
