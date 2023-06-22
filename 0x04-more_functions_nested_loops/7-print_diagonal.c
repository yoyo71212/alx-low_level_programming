#include "main.h"
/**
 * print_diagonal - Prints diagonal line of height n
 *
 * @n: The height of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
