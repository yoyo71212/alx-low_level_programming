#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * _atoi - Convert a string to an integer
 *
 * @s: The pointer to the first character in the string
 *
 * Return: The string's integer value
 */
int _atoi(char *s)
{
	char *temp = s;

	int sign, num;

	num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else
	{
		sign = 1;
		s++;
	}

	while (*s != '\0' && !(isdigit(*s)))
	{
		s++;
	}

	if (temp + 1 < s)
	{
		s--;
		temp = s - 1;
	}

	if (*s == ' ' && (*temp == ' ' || *temp == '-'))
	{
		sign = -1;
	}
	else
	{
		sign = 1;
	}
	s++;

	while (*s != '\0' && isdigit(*s))
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
