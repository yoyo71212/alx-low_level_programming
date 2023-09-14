#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
