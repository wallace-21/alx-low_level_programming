#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer with an address
 * @n: numbers
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *i;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}

	i = *head;

	while (i->next != NULL)
	{
		i = i->next;
	}
	
	i->next = new_element;
	new_element->prev = i;

	return (new_element);
}
