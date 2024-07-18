#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly created array
 *  or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;
	/* If min > max, return NULL */
	if (min > max)
		return (NULL);
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}

