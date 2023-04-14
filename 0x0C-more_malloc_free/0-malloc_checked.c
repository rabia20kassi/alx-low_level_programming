#include <stdlib.h>
#include "main.h"
/*
 * malloc_checked - Function that allocates memory using malloc.
 *
 * @b : size of the memory allocated
 * Return : a pointer to the allocated memory, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
