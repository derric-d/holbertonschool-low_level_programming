#include "holberton.h"

int check_prime(int i, int n);
/**
 * is_prime_number - returns 1 if prime number
 * @n: number passed
 * Return: 1 if prime number
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n / 2 + 1, n));
}
/**
 * check_prime - checks if number is prime
 * @i: checked factor of n
 * @n: checked number as prime
 * Return: 1 if prime, 0 if not
 */
int check_prime(int i, int n)
{
	#if 0
		we want to check that n can only divide by 1
		we can do this by setting i as n / 2 + 1 to i, as
		2 is the closest factor to 1, it gets us to about the right answer.
	#endif
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (check_prime(i - 1, n));
}
