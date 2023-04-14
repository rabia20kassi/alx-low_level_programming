#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: start value
 * @max: last value
 * Return: a pointer to array, NULL otherwise
 */

int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
