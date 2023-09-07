#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: First str
 * @s2: Second Str
 * @n: size
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	for (i = 0; s1 && *(s1 + i) != '\0'; i++)
	{
	}

	for (j = 0; s2 && *(s2 + j) != '\0'; j++)
	{
	}

	k = n > j ? (i + j) : (i + n);

	s = malloc((k + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (j = 0; j < k; j++)
	{
		if (j < i && s1)
		{
			s[j] = s1[j];
		}
		else if (s2)
		{
			s[j] = s2[j - i];
		}
	}
	s[k] = '\0';

	return (s);
}
