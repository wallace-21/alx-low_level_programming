#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: double pointer
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temporary = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temporary);
	return (data);
}
