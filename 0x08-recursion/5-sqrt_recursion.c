#include "holberton.h"

int check_sqrt(int r, int n);
/**
 * _sqrt_recursion - get square root from n
 * @n: passed integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(0, n));
}
/**
 * check_sqrt - checks if n can be square root
 * @r: root check
 * @n: passed integer
 * Return: sqrt
 */
int check_sqrt(int r, int n)
{
	int root;

	root = r * r;
	if (root > n)
		return (-1);
	if (root == n)
		return (r);
	return (check_sqrt(r + 1, n));
}


