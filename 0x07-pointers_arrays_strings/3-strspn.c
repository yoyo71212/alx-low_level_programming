#include "main.h"
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
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The string
 * @accept: The string of valid characters
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, res;

	for (i = 0, res = 0; s[i] != '\0'; i++)
	{
		if (contains(s[i], accept))
		{
			res += 1;
		}
		else
		{
			break;
		}
	}

	return (res);
}
