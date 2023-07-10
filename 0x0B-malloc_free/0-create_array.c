#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: The size of the array
 * @c: The char
 *
 * Return: NULL if size = 0, a pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *res;

	if (size == 0)
	{
		return (NULL);
	}

	res = malloc(sizeof(c) * size);
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}

	return (res);
}
