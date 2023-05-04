#include "main.h"
/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int s, i = 0;
	unsigned long int temp;

	for (s = 63; s >= 0; s--)
	{
		temp = n >> s;

		if (temp & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
