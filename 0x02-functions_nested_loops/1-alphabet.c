#include "holberton.h"

/*
 * print_alphabet - prints alphabet
 */
void print_alphabet(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int num;

	for (num = 0; num < 26; num++)
	{
		_putchar(alph[num]);
	}
	_putchar(10);
}
