#include "lists.h"

/**
 * reverse_listint - reverses singly linked list
 * @head: pointer to start of the list
 * Return: returns pointer to start of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	next = NULL;
	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
