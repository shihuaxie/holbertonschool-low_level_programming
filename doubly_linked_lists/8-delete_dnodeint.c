#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starts at 0)
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	/* Handle NULL head case */
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Special case: delete the head node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	/* Traverse to the target node */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Index out of bounds */
	if (current == NULL)
		return (-1);

	/* Unlink and free current node */
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
