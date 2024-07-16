#include "main.h"
#include <stdlib.h>
/**
 * *create_array: array of chars
 * @size: sieze of array
 * @c:chars
 * Return: Always )
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	/* Check if size is 0 */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array of chars */
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL); /* Check if malloc succeeded */

	/* Initialize each element of the array with char c */
	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

