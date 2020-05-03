#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 * @head: head of list
 * @n: value to add
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
	}
	return (new);
}
