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
			if (i < 10)
			{
				_putchar('0');
			}
			else
			{
				int temp = i / 10;

				_putchar(temp);
			}
			int temp;

			temp = i % 10;
			_putchar(temp);
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
			}
			else
			{
				int temp = j / 10;

				_putchar(temp);
			}
			temp = j % 10;
			_putchar(temp);
			_putchar('\n');
		}
	}
}
