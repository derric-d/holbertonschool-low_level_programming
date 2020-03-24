#include "lists.h"

/**
 * pop_listint - pops first node of list
 * @head: pointer to a pointer of the head of list
 * Return: the nodes data:
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *tmp = *head;

	if (tmp)
	{
		number = tmp->n;
		*head = tmp->next;
	}
	free(tmp);
	return (number);
}
