#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: If malloc fails
 * the function should cause normal process termination
 * with a status value of 98,
 * pointer to the allocated memory otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);

	if (res == NULL)
	{
		exit(98);
	}

	return (res);
}
