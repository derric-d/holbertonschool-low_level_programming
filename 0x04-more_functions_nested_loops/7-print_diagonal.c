#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - print diagonal line n lines
 * @n: number of lines to have diagonal
 * Description: print a diagonal line
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		print_space(i);
		_putchar(92);
		_putchar('\n');
	}
}
/**
 * print_space - prints comma and space w/ out putchar
 * @spaces: number of spaces to be printed
 * Description: makes space
 * Return: void
 */
void print_space(int spaces)
{
	int i;

	for (i = 0; i < spaces; i++)
	{
		_putchar(' ');
	}
}
