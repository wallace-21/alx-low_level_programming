#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *track, *temporary;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);
		return (1);
	}
	track = *head;
	for (i = 0; i < index - 1 && track != NULL; i++)
	{
		track = track->next;
	}

	if (track == NULL || track->next == NULL)
	{
		return (-1);
	}
	temporary = track->next;
	track->next = track->next->next;
	free(temporary);
	return (1);
}
