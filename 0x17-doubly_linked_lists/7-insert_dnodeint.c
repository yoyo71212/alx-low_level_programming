#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: The list
 * @idx: The index of the list where the new node should be added, starts at 0
 * @n: The data of the node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int c;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;
	for (c = 1; c != idx; c++)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
	}

	if (!(temp->next))
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			return (NULL);
		}

		new->n = n;
		new->prev = temp;
		new->next = temp->next;
		temp->next->prev = new;
		temp->next = new;

		return (new);
	}
}
