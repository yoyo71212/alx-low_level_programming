#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 * n: The number of bytes to be copied from s2
 *
 * Return: If the function fails, it should return NULL,
 * pointer shall point to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *res;

	if (s1 == NULL)
	{
		*s1 = "";
	}

	if (s2 == NULL)
	{
		*s2 = "";
	}

	if (strlen(s2) < n)
	{
		n = strlen(s2);
	}

	res = malloc(strlen(s1) + n + 1);
	
	if (res == NULL)
	{
		return (NULL);
	}

	res = strdup(s1);

	res[strlen(s1)] = ' ';

	for (i = 0; i < n; i++)
	{
		res[strlen(s1) + i] = s2[i];
	}
	res[i] = '\0';

	return (res);
}
