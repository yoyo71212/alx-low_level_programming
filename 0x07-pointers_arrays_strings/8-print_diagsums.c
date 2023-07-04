#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: The square matrix
 * @size: The size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0, sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d", sum1, sum2);
	putchar('\n');
}
