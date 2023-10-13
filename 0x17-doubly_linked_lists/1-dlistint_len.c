#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: list
 * Return: elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t track = 0;

	while (h != NULL)
	{
		h = h->next;
		track++;
	}

	return (track);
}
