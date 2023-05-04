#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: length of str
 * Return: Always 0 (Success)
 */
int _strlen(const char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 1 + _strlen(s + 1);

		return (n);
	}
}
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	int i = _strlen(b) - 1;
	int j = 0;

	if (b == NULL)
		return (0);
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			v += (b[i] - '0') * (1 << j);
			i--;
			j++;
		}
		else
			return (0);
	}
	return (v);
}

