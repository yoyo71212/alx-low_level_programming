#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: The array
 * @n: The number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	n--;

	for (i = 0; i < n && n > -1; i++)
	{
		temp = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = temp;
		n--;
	}
}
