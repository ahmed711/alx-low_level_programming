#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	s = malloc((size * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = *(str + i);
	}
	s[i] = '\0';
	return (s);
}
