#include "holberton.h"

#define NULL 0
/**
 * _puts_recursion - print a string using recursion.
 * @s: passed string
 */
void _puts_recursion(char *s)
{
	if (s == NULL)
		_putchar(NULL);
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
