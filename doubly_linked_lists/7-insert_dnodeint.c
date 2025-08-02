#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to head of the list
 * @idx: index to insert at (starts at 0)
 * @n: data to insert
 *
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	/* Special case: insert at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the node at index */
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	/* Insert at the end if idx equals length */
	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	/* If out of bounds, return NULL */
	if (temp == NULL)
		return (NULL);

	 /* Allocate new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Setup new node */
	new->n = n;
	new->next = temp;
	new->prev = temp->prev;

	/* Reconnect surrounding nodes */
	if (temp->prev)
		temp->prev->next = new;
	temp->prev = new;

	return (new);
}
