#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: returns sum of all multiples of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum;

	i = 0;
	while (i <= 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;	
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
