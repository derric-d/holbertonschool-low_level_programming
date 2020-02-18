#include "holberton.h"

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*b = a1;
	*a = b1;
}
