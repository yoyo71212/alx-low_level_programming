#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring
 *
 * @haystack: The string to be checked
 * @needle: The substring
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, res;

	for (i = 0, j = 0; haystack[i] != '\0' && needle[j] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
			{
				res = i;
			}
			j++;
		}
		else if (j > 0)
		{
			return (NULL);
		}
	}

	return (haystack + res);
}
