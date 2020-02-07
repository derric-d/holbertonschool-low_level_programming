#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h, ten, one;
	int flag;

	flag = 1;
	for (h = 48; h <= 57; h++)
	{
		for (ten = 48; ten <= 57; ten++)
		{
			for (one = 48; one <= 57; one++)
			{
				if ((h != ten) && (h != one) && (one != ten) && (ten > h) && (one > ten))
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
					putchar(h);
					putchar(ten);
					putchar(one);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
