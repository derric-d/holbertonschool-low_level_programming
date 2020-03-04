#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @s: string passed
 * Return: returns length i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * argstostr - stake in cmd line args
 * @ac: arg count
 * @av: argument vector
 * Return: pointer to string of arguments
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	int i, j, len, z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(*(av + i));

	len += ac + 1;
	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);

	for (z = 0, i = 0; i < ac; i++, z++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			dest[z] = av[i][j];

		dest[z] = '\n';
	}
	dest[z] = '\0';
	return (dest);
}
