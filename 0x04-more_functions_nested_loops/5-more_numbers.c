#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - prints lots of numbers, 10 times
 * Description: uses putchar thrice to print 1-14
 *
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	};
}
