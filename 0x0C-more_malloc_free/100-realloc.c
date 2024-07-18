#include <stdlib.h>
#include <string.h>  /* For memcpy */
#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	/**
	 * Case 1: If new_size is zero and ptr is not NULL,
	 * free the memory and return NULL
	 */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* Case 2: If ptr is NULL, allocate new memory block */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/**
	 * Case 3: If new_size equals old_size,
	 *  do nothing and return the original pointer
	 */
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* Copy the old memory content to the new memory block */
	/* Copy only the minimum of old_size and new_size */
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	/* Free the old memory block */
	free(ptr);
	return (new_ptr);
}

