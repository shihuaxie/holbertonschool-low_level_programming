#include "main.h"
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Function to print all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes, type is size_t
 *
 */

size_t print_list(const list_t *h)
{
	/* loop the node lists h */
	/* print format: [len] str */

	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count = count + 1;
		/* move current pointer to next pointer to continue the loop*/
		h = h->next;
	}
	return (count);
}
