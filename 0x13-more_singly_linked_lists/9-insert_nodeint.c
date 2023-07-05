#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: pointer
 * @idx:  index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 * Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *track;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	track = *head;
	for (i = 0; i < idx - 1 && track != NULL; i++)
	{
		track = track->next;
	}

	if (track == NULL || track->next == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = track->next;
	track->next = new_node;
	return (new_node);
}
