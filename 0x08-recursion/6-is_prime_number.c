#include "main.h"
/**
 * primeHelper - Checks if n is prime
 *
 * @n: The number
 * @temp: The current value to be checked with n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int primeHelper(int n, int temp)
{
	if (temp == 1)
	{
		return (1);
	}

	if (n % temp == 0)
	{
		return (0);
	}
	else
	{
		return (primeHelper(n, temp - 1));
	}
}

/**
 * is_prime_number - Checks if n is prime
 *
 * @n: The number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (primeHelper(n, n - 1));
}
