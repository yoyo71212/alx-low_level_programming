#include "main.h"
/**
 * print_triangle - Prints a triangle of size "size"
 *
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;

		for (i = 1; i < size + 1; i++)
		{
			int j;

			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
