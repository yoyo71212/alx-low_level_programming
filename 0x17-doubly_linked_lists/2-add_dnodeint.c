#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *
 * @head: The list
 * @n: The value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (!h || !head)
	{
		if (h)
		{
			free(h);
		}
		return (NULL);
	}

	h->n = n;
	h->prev = NULL;
	if (!*head)
	{
		*head = h;
		h->next = NULL;
	}
	else
	{
		h->next = *head;
		(*head)->prev = h;
		*head = h;
	}

	return (h);
}
