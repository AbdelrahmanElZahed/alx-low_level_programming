#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to clear, starting from 0
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of the bounds for an unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/* Use bitwise AND and NOT to clear the bit at the specified index */
	*n &= ~(1UL << index);
	return (1);
}

