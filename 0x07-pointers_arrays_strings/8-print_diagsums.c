#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints sum major and minor diagonals in square matrixes
 * @a: passed array
 * @size: size of square array (size X size)
 */
void print_diagsums(int *a, int size)
{
	int i, sumMajor, sumMinor, j;

	i = 0;
	sumMajor = 0;
	sumMinor = 0;
	/*
	 * major_diag = (size * i + i) ------ major = major + a[i][i]
	 * minor_diag = (size * (i + 1) - i - 1) ------- minor = minor + a[j][i]
	 * Minor diagonal of a matrix A is a
	 * collection of elements Aij Such that i + j = N + 1
	 */
	for (i = 0; i < size; i++)
	{
		sumMajor += *(a + size * i + i);
		sumMinor += *(a + size * (i + 1) - i - 1);
	}
	printf("%d, %d\n", sumMajor, sumMinor);
}
