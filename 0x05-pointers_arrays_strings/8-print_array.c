#include "holberton.h"
#include "stdio.h"
/**
 * print_array - prints array formatted
 * @a: array input
 * @n: number of elements we print to
 */
void print_number(int n);
/*int _putchar(char c);*/
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
	last_element = *(a + 1);
	print_number(last_element);
	_putchar('\n');
}
/*#include <unistd.h>*/
/**
 * _putchar - prints 1 byte at a time
 * @c: print object
 */
 /*
int _putchar(char c)
{
	return (write(1, &c, 1));
}*/
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
