#include "main.h"
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Function to print out the number of elements in the linked list_t
 * @h: pointer to the head of the list
 *
 * Return: the total number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
