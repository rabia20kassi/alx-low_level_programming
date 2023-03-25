#include "main.h"
/**
 * print_number - print the number
 * @n: input
 * Return: return the number
 */
void print_number(int n)
{
	unsigned int j, cont = 1;
	unsigned int var1, num, var2, var3 = 1;

	if (n < 0)
	{
		_putchar(45);
		var2 = n * (-1);
	}
	else
	{
		var2 = n;
	}
	num = var2;
	while (num > 9)
	{
		num = num / 10;
		cont++;
		var3 = var3 * 10;
	}
	for (j = 1; j <= cont; j++)
	{
		var1 = var2 / var3;
		var2 = var2 % var3;
		var3 = var3 / 10;
		_putchar ('0' + var1);
	}
}
