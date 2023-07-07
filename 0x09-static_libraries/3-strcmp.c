#include "main.h"
/**
 * _strcmp - Compare two strings
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Negative value if the first string is less than the second string,
 *         Positive value if first string is greater than the second string,
 *         0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
