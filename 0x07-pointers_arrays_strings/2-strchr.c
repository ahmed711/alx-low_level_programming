#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Entry point
 * @s: string s
 * @c: char c
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j, k;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			break;
		}
	}
	if (j == i && c != '\0')
	{
		return (NULL);
	}

	p = (char *)malloc(i - j + 1);

	for (k = 0; k < i - j; k++)
	{
		p[k] = s[k + j];
	}
	p[k] = '\0';

	return (p);
}
