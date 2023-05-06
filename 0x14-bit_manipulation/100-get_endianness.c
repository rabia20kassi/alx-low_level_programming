#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int s = 1;
	char *c;

	c = (char *) &s;
	return (*c);
}
