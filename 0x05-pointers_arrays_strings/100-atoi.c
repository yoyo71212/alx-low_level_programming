#include "main.h"
#include <string.h>
/**
 * _atoi - Convert a string to an integer
 *
 * @s: The pointer to the first character in the string
 *
 * Return: The string's integer value
 */
int _atoi(char *s)
{
	int sign, power, num;

	num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
		power--;
	}
	else
	{
		sign = 1;
	}

	while (*s != '\0')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
