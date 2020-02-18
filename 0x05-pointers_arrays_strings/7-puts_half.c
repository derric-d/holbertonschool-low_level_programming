#include "holberton.h"

/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int j;
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}
	if (!(len % 2 == 0))
		j = (len -1) /2;
	else
		j = len/2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
