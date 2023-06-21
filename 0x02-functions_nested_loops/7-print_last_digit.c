#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Returns the last digit in a number
 *
 * @n: The number
 *
 * Return: Returns the last digit in n
 */
int print_last_digit(int n)
{
	int n1;

	if (n < 0)
	{
		n1 = n * -1;
	}
	n1 = n;
	printf("%d", n1 % 10);
	return (n1 % 10);
}
