#include "main.h"
#include <stdlib.h>
/**
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
