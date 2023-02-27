#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: The vstring to be modified
 * Return: void
 */


void rev_string(char *s)
{
	int len = 0, nun = 0;
	char rev;

	while (s[nun++])
	len++;

	for (nun = len - 1; nun >= len / 2; nun--)

	{
	rev = s[nun];
	s[nun] = s[len - nun - 1];

	s[len - nun - 1] = rev;
	}
}
