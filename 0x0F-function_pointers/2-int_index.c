#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 * @array: our array
 * @size: size of the array
 * @cmp: function to callback
 *
 * Return: the index of array if success and -1 if failed
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[++i]))
			return (i);
	}
	return (-1);
}
