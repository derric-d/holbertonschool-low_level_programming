#include "lists.h"

/**
 * listint_len - gets length of linked list
 * @h: pointer to start of list
 * Return: returns number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num_nodes;

	num_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
