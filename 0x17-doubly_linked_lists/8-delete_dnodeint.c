#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: head of list
 * @idx: index given
 * Return: 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *cpy = *head;
	unsigned int count = 0;

	if (!head)
		return (-1);
	if (!idx)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(cpy);
		return (1);
	}
	while (cpy)
	{
		cpy = cpy->next;
		++count;
	}
	if (idx >= count)
		return (-1);
	cpy = *head;
	while (cpy && cpy->next && idx > 0)
	{
		--idx;
		cpy = cpy->next;
	}

	cpy->prev->next = cpy->next;
	if (cpy->next)
		cpy->next->prev = cpy->prev;
	free(cpy);
	return (1);
}
