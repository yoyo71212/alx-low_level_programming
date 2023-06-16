#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(48 + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
