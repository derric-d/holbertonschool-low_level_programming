#include "holberton.h"
/**
 * print_last_digit - takes last digit of number
 * @n: passed int
 * Description: takes last digit of numerb and returns it
 * Return: last digit
 */
int print_last_digit(int n)
{
	int num;
	int pos;

	if (n < 10)
	{
		num = n;
	}
	else if (n < 0)
	{
		pos = n * -1;
		num = pos % 10;
		_putchar(num % 10);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else
	{
		num = n % 10;
		_putchar(num);
	}
	return (num);

}
