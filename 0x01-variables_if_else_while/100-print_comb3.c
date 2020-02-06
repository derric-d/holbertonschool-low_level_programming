#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always
 */
int main(void)
{
	int tens, ones;
	int flag = 1;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = 48; ones <= 57; ones++)
		{
			if (tens != ones && ones > tens)
			{
				if (!flag)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					flag = 0;
				}
				putchar(tens);
				putchar(ones);
			}
		}
	}
	putchar('\n');
	return (0);
}
