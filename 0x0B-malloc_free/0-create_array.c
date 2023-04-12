#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: character
 * @size: the size of the memory
 * Return: NULL if size = 0, else pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

