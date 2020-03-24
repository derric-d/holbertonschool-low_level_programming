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

	if (!tmp)
		return (0);

	*head = tmp->next;
	number = tmp->n;
	free(tmp);
	return (number);
}
