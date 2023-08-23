#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: pointer to n address
 * @src: src string
 * @n: int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
