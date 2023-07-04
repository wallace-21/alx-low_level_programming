#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: object of structure
 * Return: void:
 */

void free_listint(listint_t *head)
{
	listint_t *track;

	while (head != NULL)
	{
		track = head;
		head = head->next;
		free(track);
	}
}
