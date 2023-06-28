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
	int sign, num, str;

	num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else
	{
		sign = 1;
	}

	if (*s != '\0' && isdigit(*s))
	{
		string = 0;
	}
	else
	{
		string = 1;
	}

	while (*s != '\0' && !(isdigit(*s)) && string == 1)
	{
		s++;
	}

	if (string == 1)
	{
		s--;
		char *temp = s - 1;
		if ((*s == ' ' || *s == '-') && temp != ' ')
		{
			sign = -1;
		}
		else
		{
			sign = 1;
		}
		s++;
	}

	while (*s != '\0' && isdigit(*s))
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
