#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 * @head: pointer to head of list
 * @index: index of list node
 * Return: node at index given
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
