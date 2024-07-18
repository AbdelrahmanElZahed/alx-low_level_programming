#include <stdlib.h>
#include <string.h>  /* Include this header for memset */
#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	/* Allocate memory */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	/* Initialize allocated memory to zero */
	memset(ptr, 0, total_size);
	return (ptr);
}

