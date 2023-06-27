#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: The pointer to the first character in the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *temp = s;
	int length, i;

	length = 0;

	while (*temp != '\0')
	{
		temp++;
		length++;
	}	

	for (i = 0; i < length + 1; i++, temp--)
	{
		_putchar(*temp);
	}

	_putchar('\n');
}
