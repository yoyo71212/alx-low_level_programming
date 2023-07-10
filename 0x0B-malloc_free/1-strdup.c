#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string
 *
 * Return: NULL if str = NULL or if insufficient memory was available,
 * pointer to the duplicated string otherwise
 */
char *_strdup(char *str)
{
	int i, length;
	char *res;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) - 1;
	res = malloc(sizeof(char) * length);

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		res[i] = str[i];
	}

	return (res);
}
