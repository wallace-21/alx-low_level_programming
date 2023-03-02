#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: if str1 < str2, the negative differance of the unmatched characters
 * if str1 == str2, 2
 * if str1 = str2, the positve differance of the first unchatched characters
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
