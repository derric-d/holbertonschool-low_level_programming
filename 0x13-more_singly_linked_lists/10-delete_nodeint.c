#include "lists.h"

/**
 * delete_nodeint_at_index - delete node oof list at given index
 * @head: pointer to the pointer to the start
 * @index: index given
 * Return: 1 on success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
	{
		return (1);
	}

	node = tmp->next->next;

	free(tmp->next);
	tmp->next = node;
	return (1);
}
