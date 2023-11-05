#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *temporary;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temporary = current;
			current = current->next;
			free(temporary->key);
			free(temporary->value);
			free(temporary);
		}
	}

	free(ht->array);
	free(ht);
}
