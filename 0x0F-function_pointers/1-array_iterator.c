#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each element of an array
 * @array: our array
 * @size: size of the array
 * @action : function to callback
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
