#include "holberton.h"
/**
 * jack_bauer - prints everymintue of day
 * Description: prints every minute in 24 hours
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	m = 0;
	while (h < 24)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		m++;
		if (m == 60)
		{
			h++;
			m = 0;
		}
		_putchar(10);
	}
}
