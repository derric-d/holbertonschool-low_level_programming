#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i, t1, t2, nextTerm, total;
	int limit = 4000000;
	
	t1 = 1;
	t2 = 2;
	nextTerm = 3;
	total = 2;
	while (nextTerm < limit)
	{
		if (nextTerm % 2 == 0 && nextTerm < limit)
		{
			total += nextTerm;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%lu\n", total);
	return (0);
}
