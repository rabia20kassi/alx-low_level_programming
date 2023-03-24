#include "main.h"
/**
 * print_triangle - print a triangle conformed by #
 * @size: give you the size of the triangle
 * Return: the respective figure
 */
void print_triangle(int size)
{
	int i, j;

	if (!(size <= 0))
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((j + i) <= size)
					_putchar(' ');
				else
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
