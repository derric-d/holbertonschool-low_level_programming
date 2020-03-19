#include "lists.h"

/**
 * print_list - prints list values
 * @h: pointer to list we are printing
 * Return: number of nodes passed
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
