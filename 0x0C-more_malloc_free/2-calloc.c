#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: array size
 * @size: size of an element
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	total_size = nmemb * size;
	if (!total_size)
	{
		return (NULL);
	}

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		*(ptr + i) = 0;
	}

	return (ptr);
}
