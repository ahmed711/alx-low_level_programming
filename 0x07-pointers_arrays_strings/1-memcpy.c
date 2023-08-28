#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: string dest
 * @src: string src
 * @n: integar
 * Description: 'copy the first n bytes of src to dest'
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
