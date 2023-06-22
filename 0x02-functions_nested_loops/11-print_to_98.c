#include "main.h"
/**
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		_putchar(i + 48);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
