#include <stdio.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, n, t1, t2, nextTerm;
	int limit = 4000000;
	
	t1 = 1;
	t2 = 2;
	nextTerm = 0;
	n = 2;
	for (i = 0; nextTerm < limit; i++)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		if (nextTerm % 2 == 0 && nextTerm < limit)
		{
			n += nextTerm;
		}
	}
	printf("%lu\n", n);
	return (0);
}
