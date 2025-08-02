#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - function returns the number of elements in linked dlistint_t
 * @h: pointer to the header of dlistint_t
 * Return: the number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
