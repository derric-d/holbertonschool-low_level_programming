#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	long change, coins;
	int i;
	int coin_list[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			change = atoi(argv[1]);
			while (change - coin_list[i] >= 0)
			{
				coins++;
				change -= coin_list[i];
			}
		}
		printf("%li\n", coins);
	}
	return (0);
}
