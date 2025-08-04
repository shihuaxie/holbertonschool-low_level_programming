#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key in the hash table array
 * @key: The key to hash
 * @size: Size of the array of the hash table
 *
 * Return: Index in the array where the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* the index will be [0, size - 1] */
	return (hash_djb2(key) % size);
}
