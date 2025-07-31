#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add a new node at the begining of list_t
 * @head: double pointer to the head of linked list_t
 * @str: string to be added in
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
/* 1: create a new node - new_node */
	list_t *new_node;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

/* 2: malloc for new_node and strcpy str */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* 3: new_node->len = strlen(str); */
	new_node->len = len;
/* 4: new_node->next = *head; head is pointed by new node */
	new_node->next = *head;
/* 5: *head = new_node; update *head to be the new_node */
	*head = new_node;

	return (new_node);
}
