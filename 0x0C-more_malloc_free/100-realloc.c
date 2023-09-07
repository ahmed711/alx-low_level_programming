#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: array
 * @old_size: old size
 * @new_size: new size
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int min_size, i;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	min_size = new_size > old_size ? old_size : new_size;

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < min_size && ptr; i++)
		*(new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
