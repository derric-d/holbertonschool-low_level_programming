#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch++);
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
