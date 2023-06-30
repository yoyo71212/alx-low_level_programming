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
	int temp;
	
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
	while (temp / 10 != 0)
	{
		_putchar(temp / 10);
	}
	_putchar((temp % 10) + 48);
}
