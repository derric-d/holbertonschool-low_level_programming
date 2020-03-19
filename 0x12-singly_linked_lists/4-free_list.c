#include "lists.h"

/**
 * free_list - frees each member of the list
 * @head: head of the list we are freeing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
