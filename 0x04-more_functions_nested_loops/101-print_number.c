#include "holberton.h"
/**
 * print_number - prints number using putchar
 * @n: number getting printed
 * Return: void
 */
void print_number(int n)
{
	int flag = 1;
	while (flag)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
		flag = 0;
	}
}
