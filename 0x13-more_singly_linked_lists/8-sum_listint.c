#include "lists.h"

/**
 * sum_listint - returns sum of all list n members
 * @head: pointer to list start
 * Return: sum of list n members
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
