#include "main.h"
#include <string.h>
#include <math.h>
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

	power = strlen(s);
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
		num += (*s * ((int) pow(10, power)));
		power--;
	}
	return (sign * num);
}
