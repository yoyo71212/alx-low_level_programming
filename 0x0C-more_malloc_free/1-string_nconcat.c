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
	unsigned int i, j;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (strlen(s2) < n)
	{
		n = strlen(s2);
	}

	res = malloc(sizeof(char) * (strlen(s1) + n + 1));
	
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		res[i] = s1[i];
	}

	for (j = 0; j < n; i++, j++)
	{
		res[i] = s2[j];
	}
	res[i] = '\0';

	return (res);
}
