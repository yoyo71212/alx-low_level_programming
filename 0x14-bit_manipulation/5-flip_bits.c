#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int res;

	temp = n ^ m;
	res = 0;
	while (temp)
	{
		res += temp & 1;
		temp >>= 1;
	}

	return (res);
}
