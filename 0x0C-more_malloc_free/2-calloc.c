#include "main.h"
#include <stdlib.h>
/**
 */
char *fill(void *ptr, int num)
{
	int i;
	char *res;

	res = ptr;

	for (i = 0; i < num; i++)
	{
		res[i] = '0';
	}
	return (res);
}
/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * @nmenb: Number of elements in the array
 * @size: Number of bytes for each element in the array
 *
 * Return: NULL if fails or nmemb or size are 0,
 * pointer to the allocated memory otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	res = malloc(nmemb * size);
	if (res == NULL)
	{
		return (NULL);
	}

	fill(res, nmemb);

	return (res);
}
