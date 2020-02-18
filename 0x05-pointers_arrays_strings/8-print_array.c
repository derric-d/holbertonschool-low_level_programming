#include "holberton.h"

/**
 * print_array - prints array formatted
 * @n: number of elements we print to
 */
void print_number(int n);
void print_array(int *a, int n)
{
	int i, element, last_element;

	for (i = 0; i < (n - 1); i++)
	{
		element = *(a + i);
		print_number(element);
		_putchar(',');
		_putchar(' ');
	}
	last_element = *(a + i);
	print_number(last_element);
	_putchar('\n');
}

/**
 * print_number - uses _putchar to print multidigits
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
