#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of your program
 *
 * @ac: The number of command-line arguments
 * @av: An array of pointers to the arguments
 *
 * Return: NULL if ac == 0 or av == NULL or if it fails
 * pointer to a new string otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, index, length;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		length += strlen(av[i]);
	}

	res = malloc((sizeof(char) * length) + 1);
	if (res == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < ((int) strlen(av[i])); j++)
		{
			res[index++] = av[i][j];
		}
		res[index++] = '\n';
	}

	return (res);
}
