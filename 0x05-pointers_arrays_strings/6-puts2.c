#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 *
 * @str: The first character in the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int length;

	length = strlen(str);
	while (*str != '\0' && length > 0)
	{
		_putchar(*str);
		str += 2;
		length -= 2;
	}
	_putchar('\n');
}
