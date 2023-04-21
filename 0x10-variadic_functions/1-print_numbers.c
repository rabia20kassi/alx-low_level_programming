#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers of all its parameters
 * @separator: the string to be printed between numbers
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argn;

	va_start(argn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argn, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argn);
}
