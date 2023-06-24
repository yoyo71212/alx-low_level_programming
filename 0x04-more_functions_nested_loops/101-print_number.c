#include "main.h"
/**
 * print_number - Prints a number using _putchar
 *
 * @n: The number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int length, temp, i, div;

	if (n < 0)
	{
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar('0');
	}

	length = 0;
	temp = n;

	while (temp > 0)
	{
		length++;
		temp /= 10;
	}

	div = 1;

	for (i = 0; i < length - 1; i++)
	{
		div *= 10;
	}

	while (div > 0)
	{
		_putchar((n / div) + 48);
		n %= div;
		div /= 10;
	}
}
