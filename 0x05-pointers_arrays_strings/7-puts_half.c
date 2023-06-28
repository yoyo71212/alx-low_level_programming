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
	int length, i, startI;

	char *start = str;

	char *end = start + strlen(str);

	length = end - start;
	startI = length / 2;

	if (length % 2 != 0)
	{
		startI += 1;
	}

	for (i = startI; i < length; i++)
	{
		_putchar(*(start + i));
	}
	_putchar('\n');
}
