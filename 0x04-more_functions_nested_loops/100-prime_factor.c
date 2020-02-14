#include <stdio.h>
/**
 * main - entry point
 * Description: find largest prime factor
 * Return: Always 0 (Success) 612852475143
 */
long int getLargestPrimeFac(long int n); 
int main(void)
{	
	long int n = 38;
	printf("%ld\n", getLargestPrimeFac(n));
	return (0);

}
/**
 * largestFactors - finds largest prime factor of n
 * @n: number being factored
 * Description: Finds largest prime Factor
 * Return: largest prime factor
 */
long int getLargestPrimeFac(long int n) 
{  
	long int i;

	for (i = 2; i < (n / 2); i++)
	{
    		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	return (n);
} 
