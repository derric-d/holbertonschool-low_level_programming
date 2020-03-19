#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct Node - simple struct of linked list
 * @str: string member
 * @len: length of list
 * @next: points to next Node
 */
struct Node
{
	char *str;
	unsigned int len;
	struct Node *next;
};
typedef struct Node list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
