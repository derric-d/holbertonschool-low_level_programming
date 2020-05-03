#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at idx
 * @h: head of dlist
 * @idx: index to search for
 * @n: value to insert
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *cpy = *h;
	dlistint_t *newnode = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (cpy)
	{
		cpy = cpy->next;
		++count;
	}
	if (count < idx)
		return (NULL);
	if (idx == count)
		return (add_dnodeint_end(h, n));
	cpy = *h;
	while (cpy && cpy->next && idx > 0)
	{
		--idx;
		cpy = cpy->next;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	cpy->prev->next = newnode;
	newnode->prev = cpy->prev;
	cpy->prev = newnode;
	newnode->next = cpy;

	return (newnode);
}
