#include <stdlib.h>
#include "lists.h"

/**
 * listint_len -  function that returns the number of
 * elements in a linked listint_t list.
 * @h: object of structure
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
