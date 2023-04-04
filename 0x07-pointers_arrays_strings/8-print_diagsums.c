#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @s: array
 * @size: size of array
 * Return: Always 0 (Success)
 */

void print_diagsums(int *s, int size)
{
	int i;
	int j;
	int sum_diag1;
	int sum_diag2;

	sum_diag1 = 0;
	sum_diag2 = 0;

	/* The first Diagonal from left */
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_diag1 = sum_diag1 + *(s + (i * size) + j);
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j >= 0; j--)
		{
			if (j == (size - 1 - i))
			{
				sum_diag2 = sum_diag2 + *(s + (i * size) + j);
			}
		}
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
