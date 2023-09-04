#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: array size
 * @c: first letter in array
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	s[i] = '\0';
	return (s);
}
