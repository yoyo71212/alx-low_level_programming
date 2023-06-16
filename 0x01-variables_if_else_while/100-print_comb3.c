#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (((i * 10) + j) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
