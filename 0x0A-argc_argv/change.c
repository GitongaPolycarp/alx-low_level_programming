#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coin
 * @argc: number of arguments supplied
 * @argv: array pointers
 * Return: if number of arguments is not -1. otherwise -0.
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		exit(0);
	}
	int coins[] = {50, 25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	for (int i = 0; i < num_coins; i++)
	{
		if (coins[i] > cents)
			continue;
		count += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", count);
	return (0);
}
