#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: integer to be checked
 * Return: the value of the integer
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	return (-i);
}
