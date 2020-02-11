#include "holberton.h"
/**
 * print_last_digit - takes last digit of number
 * @n: passed int
 * Description: takes last digit of numerb and returns it
 * Return: last digit
 */
int print_last_digit(int n)
{
	int pos;
	int num;

	num = n % 10;
	if (n < 0)
		pos =  (num * -1);
	else
		pos = (n % 10);

	_putchar(pos + '0');
	return (pos);

}
