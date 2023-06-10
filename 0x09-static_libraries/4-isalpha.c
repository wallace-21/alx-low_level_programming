#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: Alphabet to cherck it we an alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{

		return (1);
	}
	return (0);
}
