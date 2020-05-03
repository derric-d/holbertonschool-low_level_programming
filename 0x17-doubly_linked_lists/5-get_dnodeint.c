#include "lists.h"

/**
 * get_dnodeint_at_index - get node at idx
 * @head: head of list
 * @index: index to search
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		++count;
	}
	return (NULL);
}
