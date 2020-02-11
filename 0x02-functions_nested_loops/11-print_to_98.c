#include "holberton.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from any int to 98
 * @start: starting point as int
 * Description: prints integers from start until 98
 * Return: void
 */
void print_to_98(int start)
{

	while (start > 98 || start < 98)
	{
		if (start < 0)
			_putchar('-');
		if ((abs(start)) < 10)
			_putchar((abs(start)) + '0');
		else if ((abs(start)) < 100)
		{
			_putchar(((abs(start)) / 10) + '0');
			_putchar(((abs(start)) % 10) + '0');
		}
		else
		{
			_putchar(((abs(start)) / 100) + '0');
			_putchar((((abs(start)) / 10) % 10) + '0');
			_putchar(((abs(start)) % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		if (start > 98)
			start--;
		else
			start++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
