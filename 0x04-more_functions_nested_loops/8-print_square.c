#include "main.h"
/**
 * print_square - Prints a square with an area = size * size
 *
 * @size: The length/width of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{	int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
