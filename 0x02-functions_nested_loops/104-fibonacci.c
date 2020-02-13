#include <stdio.lib>
#define limit 10000000000000000UL
int main(void)
{
	unsigned long int maxul = 10000000000000000;
	unsigned long int term_1a, term_2a, term_1b, term_2b, total, total_1;
	int flag = 1, i;
	
	term_1a = 1;
	term_2a = 2;
	term_1b = 0;
	term_2b = 0;
	total = 0;
	total_1 = 0;

	for (i = 0; i < 90; i++)
	{
		printf("%lu,", term_1a);
		total = term_1a + term_2a;
		term_1a = term_2a;
		term_2a = total
	}
	term_1b = term_1a / maxul;
	term_1a = term_1a % maxul;
	term_2b = term_2a / maxul;
	term_2a = term_2a % maxul;
	total_1 = total / maxul;
	total = total % maxul;
	for (j = 0; j < 8; j++)
	{
		printf("%lu%lu", term_1b, term_1a);
		total = term_1a + term_2a;
		total_1 = term_1b + term_2b + (total / maxul);
		total = total % maxul;
		term_1a = term_2a;
		term_1b = term_2b;
		term_2a = total;
		term_2b = total_1;
		if (j < 7)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
