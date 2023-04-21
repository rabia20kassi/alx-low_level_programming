#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - count the sum of all its parameters
 * @n: the number of all our parameters
 *
 * Return: 0 if n==0, sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list number;

	va_start(number, n);
	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(number, int);
	}
	va_end(number);
	return (sum);
}
