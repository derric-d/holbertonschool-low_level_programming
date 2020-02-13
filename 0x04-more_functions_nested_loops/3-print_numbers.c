#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - prints 1-10
 * Description: prints 1 to 10
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
