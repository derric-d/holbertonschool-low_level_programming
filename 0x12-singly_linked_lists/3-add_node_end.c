#include "lists.h"

/**
 * _strlen - gets length of string
 * @s: string passed;
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;

	return (i);
}
/**
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
