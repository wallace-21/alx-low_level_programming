#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 *linked list_t list.
 @h: pointer variable
Return
*/

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
