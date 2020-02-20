#include "holberton.h"

/**
 * _strcmp - compares 2 strings by integer values
 * @s1: string 1
 * @s2: string 2
 * Return: value difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(char)(*s1) - (int)(char)(*s2));
}
