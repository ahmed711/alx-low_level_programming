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
	int *ptr;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[0] = 0;
	}

	return (ptr);
}
