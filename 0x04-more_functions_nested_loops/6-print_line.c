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

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
