#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: The key string
 * @size: The size of the array of the hash table
 *
 * Return: The index where the key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
	{
		return (0);
	}

	index = hash_djb2(key);

	return (index % size);
}
