#include <stdio.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, t1 = 1, t2 = 2, nextTerm;
	unsigned long int limit = 4000000;

	printf("%lu", t2);
	if (nextTerm < limit)
	{	
		for (i = 0; i <= 47; i++)
		{
			nextTerm = t1 + t2;
			if (nextTerm % 2 == 0)
			{
				printf(", %lu", nextTerm);
			}
				t1 = t2;
				t2 = nextTerm;
		}
	}
	printf("\n");
	return (0);
}
