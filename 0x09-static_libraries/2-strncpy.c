#include "main.h"

/**
 * _strncpy - copy the src string to dest string
 * @dest: The destination where it will be coppied
 * @src: the source string which is going to be coppied
 * @n: number of bytes needed to copy
 * Return: *char String of the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
