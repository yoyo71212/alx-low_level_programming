#include "main.h"
/**
 */
void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			_putchar(i + 48);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			_putchar(i + 48);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
