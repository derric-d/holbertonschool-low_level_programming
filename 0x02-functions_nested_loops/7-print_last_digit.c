#include "holberton.h"

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
int print_last_digit(int n)
{
	int num;
	int pos;

	if (n < 10)
	{
		num = n;
	}
	else if (n < 0)
	{
		pos = n * -1;
		num = pos % 10;
		_putchar(num % 10);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else
	{
		num = n % 10;
		_putchar(num);
	}
	return (num);

}
