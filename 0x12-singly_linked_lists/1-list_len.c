#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 *
 * @h: The first element in the list
 *
 * Return: The number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
