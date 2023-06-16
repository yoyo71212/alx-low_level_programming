#include <stdio.h>
/**
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		int j;

		for (j = i + 1; j < 100; j++)
		{
			if (i < 10)
			{
				putchar(48);
				putchar(48 + i);
				putchar(' ');
			}
			if (j < 10)
			{
				putchar(48);
			}
			putchar(48 + j);
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
