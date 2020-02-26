#include "holberton.h"

#define NULL 0
/**
 * _strlen_recursion - gets length of string
 * @s: string passed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len, result;

	if (*s == NULL)
		return (NULL);
	len = _strlen_recursion(s + 1);
	result = len + 1;
	return (result);
}
