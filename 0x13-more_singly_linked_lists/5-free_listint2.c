#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *track;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		track = *head;
		*head = (*head)->next;
		free(track);
	}

	*head = NULL;
}
