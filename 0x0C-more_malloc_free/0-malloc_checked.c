#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: array size
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
