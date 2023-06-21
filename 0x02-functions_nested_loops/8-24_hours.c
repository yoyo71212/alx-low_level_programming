#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int j;

		for (j = 0; j < 60; j++)
		{
			int temp;

			if (i < 10)
			{
				_putchar('0');
			}
			else
			{
				temp = i / 10;
				_putchar(temp + 48);
			}
			temp = i % 10;
			_putchar(temp + 48);
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
			}
			else
			{
				temp = j / 10;
				_putchar(temp + 48);
			}
			temp = j % 10;
			_putchar(temp + 48);
			_putchar('\n');
		}
	}
}
