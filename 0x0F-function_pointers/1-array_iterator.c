#include "function_pointers.h"
/**
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size > 0)
	{
		int i;

		for (i = 0; i < (int) size; i++)
		{
			action(array[i]);
		}
	}
}
