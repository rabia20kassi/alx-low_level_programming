#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc: argument 1;
 * @argv: argument 2;
 * Return: 0;
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
