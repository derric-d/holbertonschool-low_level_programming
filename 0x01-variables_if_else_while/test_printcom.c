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

	for (tens = 0; tens <= 99; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
	/*		if (tens != ones && ones > tens)
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
				putchar('0' + tens / 10);
				putchar('0' + tens % 10);
				putchar(' ');
				putchar('0' + ones / 10);
				putchar('0' + ones % 10);
			}*/
			if (tens == 0 && ones == 1)
			{
				putchar('0' + tens / 10);
				putchar('0' + tens % 10);
				putchar(' ');
				putchar('0' + ones / 10);
				putchar('0' + ones % 10);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar('0' + tens / 10);
				putchar('0' + tens % 10);
				putchar(' ');
				putchar('0' + ones / 10);
				putchar('0' + ones % 10);
			}

		}
	}
	putchar('\n');
	return (0);
}
