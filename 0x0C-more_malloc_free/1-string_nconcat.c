#include <stdlib.h>
#include "main.h"
/*
 * _strlen - returns the length of a string
 * @s : string
 * Return : length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/*
 * string_nconcat - Function that concatenates two strings.
 * @s1 : first string
 * @s2 : second string
 * @n :  number of bytes to get from s2
 * Return: the string containing s1 concatenated with s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, k = 0;
	unsigned int j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	while (s1[k])
	{
		concat[k] = s1[k];
		k++;
	}
	while (j < n)
	{
		concat[k] = s2[j];
		k++;
		j++;
	}
	concat[k] = '\0';
	return (concat);
}
