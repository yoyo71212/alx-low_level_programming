#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: The pointer to the first character in the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
