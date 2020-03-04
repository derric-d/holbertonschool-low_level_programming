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

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++;
	}

	/*len += ac + 1; */
	dest = malloc(sizeof(char) * (len + ac + 1));
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
