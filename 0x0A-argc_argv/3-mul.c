#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: arguments 1,
 * @argv: argument 2,
 * Return: 0 as Success, 1 as failure
 */

int main(int argc, char *argv[])
{
	int x_1;
	int x_2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x_1 = atoi(argv[1]);
	x_2 = atoi(argv[2]);
	printf("%d\n", x_1 * x_2);
	return (0);
}
