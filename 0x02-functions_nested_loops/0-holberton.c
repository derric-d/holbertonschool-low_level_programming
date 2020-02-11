#include "holberton.h"
/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char name[9] = "Holberton";
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(name[num]);
	}
	_putchar(10);
	return (0);
}
