#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all n values; 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Traverse the list */
	while (head != NULL)
	{
		sum = sum + (head->n); /* Add the current node's value to sum */
		head = head->next;     /* Move to the next node */
	}

	return (sum);
}
