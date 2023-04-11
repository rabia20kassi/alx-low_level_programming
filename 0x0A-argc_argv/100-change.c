#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the minimum number of coins to make change .
 * @argc: arguments 1.
 * @argv: arguments 2.
 *
 * Return: if the number of arguments passed to your program is not 1 -1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, i, count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;
	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", count);
	return (0);
}

