#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a place in memory
 * @str: string being copied
 * Return: pointer to string copy
 */
char *_strdup(char *str)
{
	int len, i;
	char *copy;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (copy == NULL)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';
	return (copy);
}
