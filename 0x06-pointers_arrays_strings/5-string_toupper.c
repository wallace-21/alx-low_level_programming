#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * @str: String to be changed
 * Return: A pointer to be changed string
 */

char *string_toupper(char *str)
{
	int man = 0;

	while (str[man])
	{
	if (str[man] >= 'a' && str[man] <= 'z')
	str[man] -= 32;
	man++;
	}
	return (str);
}
