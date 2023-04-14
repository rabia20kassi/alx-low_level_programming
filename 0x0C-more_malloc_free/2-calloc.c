#include <stdlib.h>
#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc -  function that allocates memory for an array,
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call = malloc(size * nmemb);
	if (call == NULL)
		return (NULL);
	_memset(call, 0, nmemb * size);
	return (call);
}
