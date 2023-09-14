#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node
 * at index index of a dlistint_t linked list
 *
 * @head: The list
 * @index: The index of the node that should be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int c;

	if (!*head)
	{
		return (-1);
	}

	curr = *head;
	for (c = 0; c != index; c++)
	{
		curr = curr->next;
		if (!curr)
		{
			return (-1);
		}
	}

	if (curr == *head)
	{
		*head = curr->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next)
		{
			curr->next->prev = curr->prev;
		}
	}

	free(curr);
	return (1);
}
