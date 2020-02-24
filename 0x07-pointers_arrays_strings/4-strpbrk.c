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
 * _strpbrk - search str for occurance of accept
 * @s: string searched
 * @accept: target char
 * Return: s from where accept is  found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
