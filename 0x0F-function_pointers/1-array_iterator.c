#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 *
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function that will print the array element
 *
 * Return: void
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
