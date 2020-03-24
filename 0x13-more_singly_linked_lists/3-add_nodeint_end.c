#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: double pointer to list head
 * @n: data to add
 * Return: address of new_node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));
	end = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = new_node;
	return (new_node);
}
