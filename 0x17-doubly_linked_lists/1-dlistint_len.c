#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
