#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node;
	listint_t *track;
	listint_t *next;

	previous_node = NULL;
	track = *head;
	next = NULL;

	while (track != NULL)
	{
		next = track->next;
		track->next = previous_node;
		previous_node = track;
		track = next;
	}
	*head = previous_node;
	return (*head);
}
