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

	while (*temp != '\0')
	{
		temp++;
	}

	for (; temp > s - 1; temp--)
	{
		_putchar(*temp);
	}

	_putchar('\n');
}
