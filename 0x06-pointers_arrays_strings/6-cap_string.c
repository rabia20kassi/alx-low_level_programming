#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: capitalized first letters
 */

char *cap_string(char *a)
{
	int i, x;
	char *seperators = ",;.!?\"(){} \n\t";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			for (x = 0; *(seperators + x) != '\0'; x++)
			{
				if (*(a + i - 1) == *(seperators + x))
				{
					*(a + i) -= 32;
					break;
				}
				else if (i == 0)
				{
					*(a + i) -= 32;
					break;
				}
			}
	}
	return (a);
}
