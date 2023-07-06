#include "main.h"
/**
 * _sqrtHelper - Returns the natural square root of a number
 *
 * @n: The number
 * @start: The starting value
 * @end: The ending value
 *
 * Return: Returns the natural square root of a number if exists, -1 otherwise
 */
int _sqrtHelper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrtHelper(n, mid + 1, end));
	}
	else
	{
		return (_sqrtHelper(n, start, mid - 1));
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

	return (_sqrtHelper(n, 0, n));
}
