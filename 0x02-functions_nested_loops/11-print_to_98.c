#include "holberton.h"
#include <stdio.h>
int main(void)
{
	print_to_98(11);
	return (0);
}
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
