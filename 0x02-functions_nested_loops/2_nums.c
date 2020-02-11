#include <stdio.h>

int main(void)
{
	int tens, ones;
	int flag = 1;

	for (tens = 0; tens <= 99; tens++)
	{
		for (ones = 0; ones <= 99; ones++)
		{
			if ((ones < tens) ||  (ones != tens))
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
				putchar('0' + tens/10);
				putchar('0' + tens%10);
				putchar(32);
				putchar('0' + ones/10);
				putchar('0' + ones%10);
			}
		}

	}
	return (0);
}
