#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural nums from n to 98 separated by , ending
 * with new line.
 * @n: holds place of input integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	printf("98\n");
}
