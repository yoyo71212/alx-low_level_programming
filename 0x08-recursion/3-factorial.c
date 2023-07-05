#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 *
 * @n: The number
 *
 * Return: -1 if n is less than 0 (error),
 * otherwise the factorial of n should be the return value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
