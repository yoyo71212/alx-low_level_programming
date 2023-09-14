#include "lists.h"
/**
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
	{
		if (new)
		{
			free(new);
		}

		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}

	return (new);
}
