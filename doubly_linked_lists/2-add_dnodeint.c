#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to assign to the new node
 * Return: address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/*1: assign memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*2: assign value to new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/*3: previous head node*/
	if (*head != NULL)
		(*head)->prev = new_node;

	/*4: update new node */
	*head = new_node;

	return (new_node);
}
