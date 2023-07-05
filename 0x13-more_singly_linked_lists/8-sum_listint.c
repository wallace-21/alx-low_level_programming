#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *track;

	track = head;

	while (track != NULL)
	{
		sum += track->n;
		track = track->next;
	}
	return (sum);
}
