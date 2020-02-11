#include "holberton.h"

int main(void)
{
	times_table();
	return (0);
}

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
