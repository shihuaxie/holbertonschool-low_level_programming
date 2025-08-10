#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the hash table
 * @key: Key to look for (must be non-empty string)
 *
 * Return: Pointer to value if found, or NULL if not found / invalid input
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
