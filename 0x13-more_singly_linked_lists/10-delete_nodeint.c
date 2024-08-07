#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    /* Handle deletion at the beginning of the list*/
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node just before the one to be deleted*/
    current = *head;
    for (i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    /* If current is NULL or current->next is NULL, index is out of range*/
    if (current == NULL || current->next == NULL)
        return (-1);

    /* Delete the node at the given index*/
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

