#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Return: None.
 *
 * Description: This function frees all memory associated with the hash table,
 * including each key/value pair and the array itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	/* Iterate over each index in the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* Get the linked list at index i */
		while (node != NULL) /* Traverse the linked list */
		{
			temp = node; /* Store the current node */
			node = node->next; /* Move to the next node */
			free(temp->key); /* Free the key */
			free(temp->value); /* Free the value */
			free(temp); /* Free the node itself */
		}
	}

	/* Free the array of the hash table */
	free(ht->array);
	/* Free the hash table structure itself */
	free(ht);
}
