#include "holberton.h"

/*
 * print_alphabet - prints alphabet
 */
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}


void print_alphabet(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int num;

	for (num = 0; num < 26; num++)
	{
		_putchar(alph[num]);
	}
	_putchar('\n');
}
