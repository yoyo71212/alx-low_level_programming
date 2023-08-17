#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * pow2 - Returns 2 power num
 *
 * @num: The number
 *
 * Return: 2 power num
 */
int pow2(int num)
{
	int res;

	res = 1;
	while (num > 0)
	{
		res *= 2;
		num--;
	}

	return (res);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: The binary number
 *
 * Return: The converted number,
 * or 0 if b is NULL or there is one or more chars in the string b
 * that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, power;
	unsigned int res;

	if (!b)
	{
		return (0);
	}

	len = strlen(b) - 1;
	power = 0;
	res = 0;
	for (i = len; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res += (b[i] - '0') * pow2(power);
			power++;
		}
		else
		{
			return (0);
		}
	}

	return (res);
}
