#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, t1, t2, nextTerm, total;
	int limit = 4000000;

	t1 = 1;
	t2 = 2;
	nextTerm = 3;
	total = 2;
	while (nextTerm < limit)
	{
		if (nextTerm % 2 == 0)
		{
			total += nextTerm;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%ld\n", total);
	return (0);
}
