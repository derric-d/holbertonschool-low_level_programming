#include "holberton.h"

int main(void)
{
	print_alphabet_x10();
	return (0);
}
/*
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int num;
	int i = 0;

	while (i < 10)
	{
		for (num = 0; num < 26; num++)
		{
			_putchar(alph[num]);
		}
		_putchar(10);
		i++;
	}
}
