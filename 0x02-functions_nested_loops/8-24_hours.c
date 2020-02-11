#include "holberton.h"

int main(void)
{
	jack_bauer();
	return (0);
}
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
