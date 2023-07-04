#include "main.h"
#include <stddef.h>
/**
 * contains - Checks if the character c is in the string s
 *
 * @c: The character
 * @s: The string
 *
 * Return: 1 if c is in s, 0 otherwise
 */
int contains(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
		{
			return (1);
		}

		s++;
	}

	return (0);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: The string to be searched
 * @accept: The string of accepted bytes
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (contains(s[i], accept))
		{
			return (s + i);
		}
	}

	return (NULL);
}
