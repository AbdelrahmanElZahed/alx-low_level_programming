#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the key/value pairs in a hash table.
 * @ht: The hash table to print.
 *
 * Return: None.
 *
 * Description: This function prints all the key/value pairs in a hash table
 * in the order they appear in the array. If the hash table is NULL, nothing
 * is printed. The output format is a dictionary-like format, surrounded by
 * curly braces and separating pairs with commas.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1; /* Flag to handle comma placement */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* Get the linked list at index i */
		while (node != NULL) /* Traverse the linked list */
		{
			if (!first) /* If not the first element, print a comma */
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0; /* Set the flag to false after first element */
			node = node->next; /* Move to the next node */
		}
	}
	printf("}\n");
}
