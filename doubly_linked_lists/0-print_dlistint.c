#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - Function to print put all elements of dlistint_t list
 * @h: pointer to the head node of dlistint_t
 * Return: printed elements
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	/*1: need return the number of nodes*/
	/*2: print all elements */
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
