#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer with values and digitd
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
