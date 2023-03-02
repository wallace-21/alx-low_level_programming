#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: The string to be appende upon
 * @src: The string to be appended to dest
 * @n: The number of bytes to be appended to dest
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int man = 0, dest_len  = 0;

	while (dest[man++])
	dest_len++;
	for (man = 0; src[man] && man < n; man++)
	dest[dest_len++] = src[man++];
	return (dest);
}
