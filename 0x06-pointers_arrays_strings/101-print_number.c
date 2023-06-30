#include "main.h"
/**
 * print_number - Prints an integer
 *
 * @n: The number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, temp, numOfDigits, power;

	if (n == 0)
	{
		_putchar('0');
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;
	numOfDigits = 0;
	while (temp > 0)
	{
		temp /= 10;
		numOfDigits++;
	}

	temp = n;
	for (i = numOfDigits - 1; i > -1; i--)
	{
		power = 1;
		for (j = 0; j < i; j++)
		{
			power *= 10;
		}
		_putchar((temp / power) + 48);
		temp %= power;
	}
}
