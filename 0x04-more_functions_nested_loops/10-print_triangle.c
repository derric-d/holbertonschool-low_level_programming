#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - prints triangle
 * @size: size of base of triangle across
 * Description: Makes triangles with size(base)
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, j = 0;
	int numBlank, numPound;

	numBlank = size - 1;
	numPound = size - numBlank;
	if (size <= 0)
		_putchar('\n');
	while (numBlank >= 0)
	{
		for (i = 0; i < numBlank; i++)
		{
			_putchar(' ');
		}
		for (j = 0; j < numPound; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		numBlank--;
		numPound++;
	}
}
