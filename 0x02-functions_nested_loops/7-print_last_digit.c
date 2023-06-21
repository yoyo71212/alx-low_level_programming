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
	int n1 = n % 10;

	if (n1 < 0)
	{
		n1 = n1 * -1;
	}
	_putchar(n1 + 48);
	return (n1);
}
