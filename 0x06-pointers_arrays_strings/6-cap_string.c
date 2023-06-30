#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: The string
 *
 * Return: Pointer to the string after capitalization of all words
 */
char *cap_string(char *s)
{
	char *temp = s;

	while (*s)
	{
		if (s == temp || *(s - 1) == ' ' || *(s - 1) == '\t' || *(s - 1) == '\n'
				|| *(s - 1) == ',' || *(s - 1) == ';' || *(s - 1) == '.'
				|| *(s - 1) == '!' || *(s - 1) == '?' || *(s - 1) == '"'
				|| *(s - 1) == '(' || *(s - 1) == ')' || *(s - 1) == '{'
				|| *(s - 1) == '}')
		{
			if (*s >= 97 && *s <= 122)
			{
				*s = *s - 32;
			}
		}

		s++;
	}

	return (temp);

}
