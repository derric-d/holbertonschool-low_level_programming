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
	
	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			putchar('0' + tens);
			putchar('0' + ones);
			if (ones != 9 || tens != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
