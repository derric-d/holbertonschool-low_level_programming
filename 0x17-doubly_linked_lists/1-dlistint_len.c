#include "lists.h"

/**
 * dlistint_len - get list length
 * @h: head of list
 * Return: num in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cpy = h;
	size_t count = 0;

	while (cpy != NULL)
	{
		++count;
		cpy = cpy->next;
	}
	return (count);
}
