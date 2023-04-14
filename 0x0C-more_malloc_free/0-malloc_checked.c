#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory allocated
 * Return:the pointer to the memory allocated, exit(98) otherwise
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
