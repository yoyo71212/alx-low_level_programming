#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Returns the last digit in a number
 *
 * @n: The number
 *
 * Return: Returns the last digit in n
 */
int print_last_digit(int n)
{
	int absN = abs(n);
	_putchar(absN);
	return (absN % 10);
}