#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int j;

		for (j = i + 1; j < 100; j++)
		{
			putchar(48 + (i / 10));
			putchar(48 + (i % 10));
			putchar(' ');
			putchar(48 + (j / 10));
			putchar(48 + (j % 10));
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
