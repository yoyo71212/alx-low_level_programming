#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * wordcount - Counts the number of words in str
 *
 * @str: The string
 *
 * Return: The number of words in the str
 */
int wordcount(char *str)
{

	int wc, flag;

	wc = 0;
	flag = 1;
	while (*str)
	{
		if (*str == ' ')
		{
			if (*(str + 1) && *(str + 1) != ' ')
			{
				wc++;
			}
		}
		else if (flag)
		{
			wc++;
		}
		flag = 0;
		str++;
	}

	return (wc);
}

/**
 * length - Gets the length of the current word in str
 *
 * @str: The string
 * @i: The starting index
 *
 * Return: The length of the current word in the string
 */
int length(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] && str[i] != ' ')
	{
		len++;
		i++;
	}

	return (len);
}
/**
 * strtow - Splits a string into words
 *
 * @str: The string
 *
 * Return: NULL if str == NULL or str == "" or if it fails,
 * pointer to an array of strings (words) otherwise
 */
char **strtow(char *str)
{
	int i, j, k, wc, lc;
	char **res;

	wc = wordcount(str);
	if (str == NULL || *str == '\0' || wc == 0)
	{
		return (NULL);
	}

	res = malloc(sizeof(char *) * (wc + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	res[wc] = NULL;
	j = 0;
	for (i = 0; i < wc; i++)
	{
		while (str[j] && str[j] == ' ')
		{
			j++;
		}
		lc = length(str, j);
		res[i] = malloc(sizeof(char) * lc + 1);
		if (res[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(res[k]);
			}
			free(res);
			return (NULL);
		}
		for (k = 0; k < lc; k++)
		{
			res[i][k] = str[j++];
		}
		res[i][k] = '\0';
	}
	return (res);
}
