#include "main.h"
/**
 * print_last_digit - Returns the last digit in a number
 *
 * @n: The number
 *
 * Return: Returns the last digit in n
 */
int print_last_digit(int n)
{
	int abs = _abs(n);
	_putchar(abs);
	return (abs % 10);
}
