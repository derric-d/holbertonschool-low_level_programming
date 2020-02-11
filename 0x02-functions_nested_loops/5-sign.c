#include "holberton.h"
/**
 * print_sign - prints sign of number
 * @n: passed value
 * Description: prints sign of number
 * Return: 1 if pos, 0 if 0, -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
