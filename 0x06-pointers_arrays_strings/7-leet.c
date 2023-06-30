#include "main.h"
#include <ctype.h>
/**
 * leet - Encodes a string into 1337.
 *
 * @s: The string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	char c;

	char *temp = s;

	while (*s)
	{
		c = tolower(*s);

		if (c == 'a')
		{
			*s = '4';
		}
		else if (c == 'e')
		{
			*s = '3';
		}
		else if (c == 'o')
		{
			*s = '0';
		}
		else if (c == 't')
		{
			*s = '7';
		}
		else if (c == 'l')
		{
			*s = '1';
		}
		s++;
	}
	return (temp);
}
