#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: NULL on failure,
 * pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);
	res = malloc((sizeof(char) * length1) + (sizeof(char) * length2) + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		res[i] = s1[i];
	}
	for (i = length1, j = 0; j < length2; i++, j++)
	{
		res[i] = s2[j];
	}

	return (res);
}
