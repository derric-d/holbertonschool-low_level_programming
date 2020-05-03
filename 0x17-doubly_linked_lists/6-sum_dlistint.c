#include "lists.h"

/**
 * sum_dlistint - get sum of list values
 * @head: head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cpy = head;
	int sum = 0;

	while (cpy)
	{
		sum += cpy->n;
		cpy = cpy->next;
	}
	return (sum);
}
