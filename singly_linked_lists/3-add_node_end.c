#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: double pointer to the head node of list_t
 * @str: string need sto be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
/* 1: create a new node - new_node */
	list_t *new_node;
	list_t *temp;

/* 2: malloc for new_node and strcpy str */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	/* copy the string to new_node*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* if failed copy, release new_node storage*/
		return (NULL);
	}

	/* get the length of string */
	new_node->len = strlen(str);

	new_node->next = NULL;

	/* the original head is NULL, set new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* list_t is not NULL, then loop to the last node*/
	temp = *head;

	while (temp->next != NULL) /* keep going until find the last node */
		temp = temp->next; /* assign last node to temp */

	temp->next = new_node;

	return (new_node);
}
