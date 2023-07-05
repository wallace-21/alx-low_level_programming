#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer
 * @index: index
 * Return: return NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *track;

	track = head;

	while (track != NULL)
	{
		if (count == index)
		{
			return (track);
		}
		track = track->next;
		count++;
	}
	return (NULL);
}
