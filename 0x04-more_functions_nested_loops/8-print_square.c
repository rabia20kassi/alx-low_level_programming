#include "main.h"
/**
 * print_square - print a #
 * @size: says how many # this function is going to print
 * Return: the respective cantity of #
 */
void print_square(int size)
{
	int i, j;

	if (!(size <= 0))
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
