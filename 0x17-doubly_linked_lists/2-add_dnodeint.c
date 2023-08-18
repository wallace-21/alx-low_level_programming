#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list
 * @head: double pointer with an address
 * @n: numbers
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
