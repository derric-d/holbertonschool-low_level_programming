#include <stdio.h>
#include "holberton.h"
/**
 * print_line - prints line n times
 * @n: number of lines to print
 * Description: print line n times
 * Return: void
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
		_putchar('\n');
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
