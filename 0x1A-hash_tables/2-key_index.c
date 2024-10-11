#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table
 * @key: The key (string) used to generate the index
 * @size: The size of the array in the hash table
 *
 * This function computes the index at which the key should be stored
 * in the hash table by using the hash_djb2 function to hash the key,
 * then taking the modulus of the result by the size of the array.
 *
 * Return: The index in the hash table where the key/value pair
 * should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

