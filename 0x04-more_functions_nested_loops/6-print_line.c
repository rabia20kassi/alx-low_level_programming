#include "main.h"
/**
 * print_line - print a line
 * @n: says how many lines this functions is going to print
 * Return: the restive cantity of lines
 */
void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
