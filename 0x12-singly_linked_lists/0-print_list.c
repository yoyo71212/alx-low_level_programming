#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: The first element of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
