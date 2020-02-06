#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = 48; ones <= 57; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (ones != 57 || tens != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
