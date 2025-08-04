#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: Pointer to the newly created hash table, or NULL on failure
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/*Allocate memory for hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/*Set size and allocate memory for array of node pointers */
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize all array entries to NULL */
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
