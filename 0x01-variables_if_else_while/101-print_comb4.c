#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
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
			int k;

			for (k = j + 1; k < 10; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (((i * 100) + (j * 10) + k) < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
