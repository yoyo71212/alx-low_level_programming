#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: The pointer to the first integer
 * @b: The pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
