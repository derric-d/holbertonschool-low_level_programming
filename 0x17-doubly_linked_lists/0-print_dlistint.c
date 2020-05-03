#include "lists.h"

/**
 * print_dlistint - print dlist
 * @h: head of list
 * Return: num nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cpy = h;
	size_t count = 0;

	while (cpy != NULL)
	{
		printf("%d\n", cpy->n);
		cpy = cpy->next;
		++count;
	}
	return (count);
}
