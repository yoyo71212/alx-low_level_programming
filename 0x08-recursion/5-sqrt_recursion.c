#include "main.h"
/**
 * _sqrtHelper - Returns the natural square root of a number
 *
 * @n: The number
 * @g: The guess
 *
 * Return: Returns the natural square root of a number if exists, -1 otherwise
 */
int _sqrtHelper(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g >  n)
	{
		return (-1);
	}
	else
	{
		return (_sqrtHelper(n, (g + ((n / g)) / 2)));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number
 *
 * Return: Returns the natural square root of a number if exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrtHelper(n, 1));
}
