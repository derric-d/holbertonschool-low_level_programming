#include "lists.h"

/**
 * free_dlistint - free dlist
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cpy;

	while (head)
	{
		cpy = head->next;
		free(head);
		head = cpy;
	}
}
