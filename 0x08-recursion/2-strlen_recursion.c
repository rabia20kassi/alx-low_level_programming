#include "main.h"

/**
 * _strlen_recursion - Entry
 * Description: Write a function that returns the length of a string.
 * @s: length of str
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 1 + _strlen_recursion(s + 1);

		return (n);
	}
}
