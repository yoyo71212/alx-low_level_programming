#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @s: The string
 *
 * Return: The string with all lowercase letters changed to uppercase
 */
char *string_toupper(char *s)
{
	char *temp = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}

	return (temp);
}
