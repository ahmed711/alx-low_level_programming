#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: string
 * @s2: string
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, size1, size2;

	for (size1 = 0; s1 != NULL && s1[size1] != '\0'; size1++)
	{
	}

	for (size2 = 0; s2 != NULL && s2[size2] != '\0'; size2++)
	{
	}

	s = malloc(((size1 + size2) * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
		{
			*(s + i) = *(s1 + i);
		}
		else
		{
			*(s + i) = *(s2 + i - size1);
		}
	}
	s[i] = '\0';
	return (s);
}
