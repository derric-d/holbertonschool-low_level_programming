#include "holberton.h"

/**
 * _strncpy - copy string src to dest
 * @dest: goal string
 * @src: string being added to dest
 * @n: number of elements to take
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *src)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

