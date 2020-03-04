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

	if (av == NULL || ac == 0)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

		i++;
	}

	/*len += ac + 1; */
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);

	z = 0;
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			dest[z++] = av[i][j];

		dest[z++] = '\n';
		i++;
	}
	dest[z] = '\0';
	return (dest);
}
