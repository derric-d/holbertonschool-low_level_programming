#include <stdio.h>
/**
 * main - entry point
 * Description: returns 1st 50 fib seqs
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, t1 = 1, t2 = 2, nextTerm;

	printf("%lu, %lu", t1, t2);
	for (i = 0; i <= 49; i++)
	{
		nextTerm = t1 + t2;
		printf(", %lu", nextTerm);
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
