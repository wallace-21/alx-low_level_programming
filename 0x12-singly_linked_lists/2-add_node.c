#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer
 * @str: string
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	const char *c;
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		exit(1);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		exit(1);
	}

	new_node->len = 0;
	c = new_node->str;
	while (*c != '\0')
	{
		new_node->len++;
		c++;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
