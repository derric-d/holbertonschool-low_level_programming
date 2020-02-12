#include <stdio.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int t1, t2, nextTerm, total;
	int limit = 4000000;

	t1 = 1;
	t2 = 2;
	nextTerm = 0;
	total = 0;
	while (nextTerm < limit)
	{
		if (t2 % 2 == 0)
		{
			total += t2;
		}
		nextTerm = t2;
		t2 += t1;
		t1 = nextTerm;
	}
	printf("%u\n", total);
	return (0);
}
