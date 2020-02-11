#include "holberton.h"
/**
 * times_table - prints times table
 * Description: prints out times table to 9x9
 * Return: void
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				_putchar(mult + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (j == 9)
			{
				_putchar(10);
			}

		}
	}

}
