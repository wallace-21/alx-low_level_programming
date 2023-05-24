#include <stdio.h>
#include "main.h"

/**
 * _islower -  a function that checks for lowercase character
 * @c: alpabet to be checked if its lowecase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	return (0);
}
