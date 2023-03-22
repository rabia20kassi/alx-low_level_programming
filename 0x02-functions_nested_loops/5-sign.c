#include "main.h"
/**
 * print_sign - prints sign of int or 0 and returns -1,0 or 1
 * @n: passes value to function
 *
 * Return: 1 if positive 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
