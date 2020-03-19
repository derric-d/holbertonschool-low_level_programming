#include "lists.h"

/**
 * list_len - gets the length of the list
 * @h: current node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
