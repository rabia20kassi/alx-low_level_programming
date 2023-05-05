#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		i += xor & 1;
		xor >>= 1;
	}

	return (i);
}
