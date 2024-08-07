#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Data for the new node
 *
 * Return: Address of the new node,
 * or NULL if it failed or index is out of range
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Create the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Handle insertion at index 0 (beginning of the list)*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the position to insert*/
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* If current is NULL, index is out of range*/
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the given position*/
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

