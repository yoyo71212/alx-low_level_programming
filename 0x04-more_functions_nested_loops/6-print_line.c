#include "main.h"
/**
 * print_line - Prints a straight line with n '_'
 *
 * @n: The number of '_' in the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
