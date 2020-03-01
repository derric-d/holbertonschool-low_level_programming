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
	return (!c ? s : NULL);
}
