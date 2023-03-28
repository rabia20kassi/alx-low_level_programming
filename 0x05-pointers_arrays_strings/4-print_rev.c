#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		len++;
		++s;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
