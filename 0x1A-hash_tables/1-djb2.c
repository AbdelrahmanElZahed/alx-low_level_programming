#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash function
 * @str: The string to hash (unsigned char pointer)
 *
 * This function takes a string and hashes it using the djb2
 * algorithm, which is a simple, efficient, and effective hashing
 * function. It multiplies the hash by 33 for each character in the
 * string and adds the ASCII value of the character.
 *
 * Return: The generated hash as an unsigned long int.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
