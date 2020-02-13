#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point
 * Description: entry point
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	fizzbuzz();
	return (0);
}

/**
 * fizzbuzz - prints  routine to 100
 * Description: print numbers to 100 with fizzbuzz
 *
 * Return: void
 */
void fizzbuzz(void)
{
	int i;

	printf("%s", "1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}
