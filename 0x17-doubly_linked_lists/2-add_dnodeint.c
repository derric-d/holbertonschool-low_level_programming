#include "lists.h"

/**
 * add_dnodeint - add node to start of dlist
 * @head: pointer to start of head
 * @n: value assigned to new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
