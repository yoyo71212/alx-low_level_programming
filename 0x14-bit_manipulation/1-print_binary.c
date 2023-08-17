#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: The number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num_of_bits, i, flag, curr_bit;

	num_of_bits = sizeof(n) * 8;
	flag = 0;
	for (i = num_of_bits - 1; i >= 0; i--)
	{
		curr_bit = (n >> i) & 1;

		if (curr_bit == 1)
		{
			flag = 1;
		}

		if (flag)
		{
			_putchar(curr_bit + '0');
		}
	}

	if (!flag)
	{
		_putchar('0');
	}
}
