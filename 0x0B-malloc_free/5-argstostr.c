#include "holberton.h"
#include <stdlib.h>

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

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, len++)
			;
	}
	len += ac + 1;
	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);

	z = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			dest[z] = av[i][j];
			z++;
		}
		dest[z] = '\n';
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
