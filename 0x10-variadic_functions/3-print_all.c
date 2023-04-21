#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format of the input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argr;
	char *separator, *str;
	int x;

	separator = "";
	x = 0;

	va_start(argr, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argr, double));
					break;
				case 's':
					str = va_arg(argr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(argr);
}
