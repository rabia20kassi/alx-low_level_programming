#include "main.h"
/**
 * print_most_numbers - print number from 0 -9 less 2 and 4
 * Return: the respective sequence
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
