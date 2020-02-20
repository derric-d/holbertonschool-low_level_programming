#include "holberton.h"

/**
 * reverse_array - reverse array in place
 * @a: array passed
 * @n: element limit
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *end = a;
	int *xtra = a;
	int tmp;

	xtra += (n - 1);

	while (end < xtra)
	{
		tmp = *end;
		*end++ = *xtra;
		*xtra-- = tmp;
	}
}
