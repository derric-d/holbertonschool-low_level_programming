#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - search str for occurance of c
 * @s: string searched
 * @c: target char
 * Return: s when c from where c is  found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
/**
 * _strspn - search str for occurance of any in accept
 * @s: string searched
 * @accept: target string
 * Return: bytes from where accept is  found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;

	while (*s && _strchr(accept, *s))
	{

		s++;
		i++;
	}
	return (i);
}
