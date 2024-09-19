#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added.
 * @n: The data (integer) to insert in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx == 0) /* If inserting at the head */
		return (add_dnodeint(h, n));
	/* Traverse to the position where the node needs to be inserted */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp && idx > i + 1) /* If index is out of range */
		return (NULL);
	if (!temp->next) /* If inserting at the end */
		return (add_dnodeint_end(h, n));
	/* Create new node */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	/* Inserting in between nodes */
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
