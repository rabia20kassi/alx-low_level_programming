#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: he index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 1;

	if (sizeof(n) * 8 < index)
		return (-1);
	m <<= index;
	*n &= ~m;
	return (1);
}
