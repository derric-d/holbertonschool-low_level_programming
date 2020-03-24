#include "lists.h"

/**
 * add_nodeint - add node to list
 * @head: pointer to pointer to start
 * @n: value for new member
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * insert_nodeint_at_index - insert a node at a certain index
 * @head: pointer to pointer to the start of list
 * @idx: index to insert at
 * @n: element value to insert
 * Return: return node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int count;

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	else
	{
		for (count = 0; count < idx - 1; count++)
		{
			if (!current)
				return (NULL);
			current = current->next;
		}
		if (!current)
			return (NULL);
		return (add_nodeint(&(current->next), n));
	}
}
