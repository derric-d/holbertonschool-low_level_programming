#include <stdio.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int t1, t2, nextTerm;
	long int total = 0;

	t1 = 1;
	t2 = 2;
	while (t2 < 4000000)
	{
		if (t2 % 2 == 0)
		{
			total += t2;
		}
		nextTerm = t2;
		t2 += t1;
		t1 = nextTerm;
	}
	printf("%ld\n", total);
	return (0);
}
