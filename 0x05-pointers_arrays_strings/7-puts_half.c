#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of a string
 *
 * @str: The first character of the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, n, temp;
	char *start = str;

	length = strlen(str);

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	temp = n;

	while (temp > 0)
	{
		start++;
		temp--;
	}

	for (temp = n; temp >= 0; temp--)
	{
		_putchar(*start);
		start++;
	}
	_putchar('\n');
}
