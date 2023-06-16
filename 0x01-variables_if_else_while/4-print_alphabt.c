#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' || i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
