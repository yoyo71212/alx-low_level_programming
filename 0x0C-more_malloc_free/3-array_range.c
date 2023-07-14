#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 *
 * @min: Min value in the array
 * @max: Max value in the array
 *
 * Return: NULL if min > max or malloc fails,
 * the pointer to the newly created array
 * the array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 */
int *array_range(int min, int max)
{
	int i;
	int *res;

	if (min > max)
	{
		return (NULL);
	}

	res = malloc(sizeof(int) * (max - min + 1));

	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i + min < max + 1; i++)
	{
		res[i] = i + min;
	}

	return (res);
}
