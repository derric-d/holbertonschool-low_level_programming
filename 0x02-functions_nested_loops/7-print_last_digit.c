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
	
	num = n % 10;
	if (num > 0)
		pos =  num;
	else
		pos = num * -1;

	_putchar(pos);
	return (pos);

}
