#include "main.h"
#include <string.h>
/**
 * skip - Returns the first index after skipping all *s
 *
 * @s: The string
 * @index: The starting index
 *
 * Return: The first index after skipping all *s
 */
int skip(char *s, int index)
{
	if (s[index] != '*' || s[index] == '\0')
	{
		return (index);
	}

	return (skip(s, index + 1));
}

/**
 * search - Searches for a character c in string s1
 *
 * @s1: The string
 * @i1: Starting index of s1
 * @c: The character
 *
 * Return: Index of s1 where c is found
 */
int search(char *s1, int i1, char c)
{
	if (s1[i1] == c || s1[i1] == '\0')
	{
		return (i1);
	}

	return (search(s1, i1 + 1, c));
}

/**
 * wildcmpHelper - Compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @i1: Index of s1
 * @i2: Index of s2
 * @len1: Length of s1
 * @len2: Length of s2
 *
 * Return: 1 if the strings are considered identical, 0 otherwise
 */
int wildcmpHelper(char *s1, char *s2, int i1, int i2, int len1, int len2)
{
	if (s2[i2] == '*')
	{
		i2 = skip(s2, i2);
	}

	if (i2 >= len2)
	{
		return (1);
	}
	else
	{
		i1 = search(s1, i1, s2[i2]);
		if (i1 >= len1)
		{
			return (0);
		}

		return (wildcmpHelper(s1, s2, i1 + 1, i2 + 1, len1, len2));
	}
}

/**
 * wildcmp - Compares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int s2Index;

	if (strlen(s2) == 1 && *s2 == '*')
	{
		return (1);
	}

	s2Index = 0;
	if (s2[s2Index] == '*')
	{
		s2Index = skip(s2, s2Index);
	}

	return (wildcmpHelper(s1, s2, 0, s2Index, strlen(s1), strlen(s2)));
}
