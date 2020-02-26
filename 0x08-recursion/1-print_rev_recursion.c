#include "holberton.h"

#define NULL 0

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: string passed to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
