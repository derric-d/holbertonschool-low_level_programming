#include "holberton.h"

/**
 * print_times_table - prints n x n table
 * @n: is the limit value to be multiplied
 * Description: prints n * n mult table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mult;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mult = (i * j);
			if (j == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10 && mult < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 100) + '0');
				_putchar(((mult % 100) / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (j == n)
				_putchar('\n');
		}
	}
}
