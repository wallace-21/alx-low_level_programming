#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: object of structure
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
