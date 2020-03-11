#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: fisrt int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs b from a
 * @a: firat int
 * @b: second int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: first int
 * @b: multiplier
 * Return: product
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - adds a and b
 * @a: first int
 * @b: divisor
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mods a and b
 * @a:first int
 * @b:second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
