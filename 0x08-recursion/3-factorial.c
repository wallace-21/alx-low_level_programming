#include "main.h"

/**
 * factorial - unction that returns the factorial of a given number
 * @n: number o calculate
 * Return: integer value
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
