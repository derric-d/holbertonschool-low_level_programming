#include "holberton.h"

/**
 * _strncat - concatinates arrays up to n byres
 * @dest: target array
 * @src: end array
 * @n: index limit
 * Return: strings concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;
	int  src_j;

	src_j = 0;

	while (*end)
	{
		end++;
	}
	while (*src && src_j < n)
	{
		*end = *src;
		end++;
		src++;
		src_j++;
	}
	*end = '\0';

	return (dest);
}
