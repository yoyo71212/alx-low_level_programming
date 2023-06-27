#include "main.h"
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
	while (*(str + 1) != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
