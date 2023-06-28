#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: The pointer to the first character in the array
 * @n: The number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n < 1)
	{
		return;
	}

	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	printf("%d\n", *a);
}
