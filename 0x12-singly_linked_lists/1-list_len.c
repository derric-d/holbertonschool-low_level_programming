#include "lists.h"

/**
 * list_len - gets the length of the list
 * @h: current node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
