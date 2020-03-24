#include "lists.h"

/**
 * print_listint - prints each member of the list
 * @h: pointer to start of list
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes;

	if (h == NULL)
		return (0);
	for (num_nodes = 0; h != NULL; num_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
