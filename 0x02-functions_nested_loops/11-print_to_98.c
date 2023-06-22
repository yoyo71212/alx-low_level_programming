#include "main.h"
/**
 * print_to_98 - Prints all numbers from n to 98
 *
 * @n: The initial number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i > 99)
			{
				_putchar((i / 100) + '0');
				_putchar((i % 100) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
