#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 * Description: This function retrieves the value
 * of a given key in a hash table.
 * It computes the index using the key, then looks
 * through the linked list at
 * that index to find the corresponding key.
 * If the key is found, the associated
 * value is returned; otherwise, NULL is returned.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Compute the index for the given key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	node = ht->array[index];
	while (node != NULL)
	{
		/* If key is found, return its value */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* Key not found, return NULL */
	return (NULL);
}
