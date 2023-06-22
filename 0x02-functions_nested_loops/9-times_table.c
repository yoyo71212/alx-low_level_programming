#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int res;

			res = i * j;
			if (res < 9)
			{
				_putchar(res + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if(res < 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
