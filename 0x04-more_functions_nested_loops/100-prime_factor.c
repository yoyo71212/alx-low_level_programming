#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num, max, i;

	max = 1;
	num = 612852475143;

	for (i = 2; i * i < num; i++)
	{
		if (num % i == 0)
		{
			max = num / i;
		}
	}

	printf("%d\n", max);
	return (0);
}
