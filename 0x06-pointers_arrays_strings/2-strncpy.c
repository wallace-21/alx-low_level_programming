#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: The buffer storing the string copy
 * @src: the source string
 * @n: The maximum number of bytes to be copied from src
 * Return: A pointer to the resulting if dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int man = 0, src_len = 0;

	while (src[man++])
	src_len++;
	for (man = 0; src[man] && man < n; man++)
	dest[src_len++] = src[man++];

	for (man = src_len; man < n; man++)
	dest[man] = '\0';

	return (dest);
}
