#include "main.h"

/**
 * _strncat - Entry point
 * @dest: string dest
 * @src: string src
 * @n: int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (k = 0; src[k] != '\0'; k++)
	{
	}

	if (n > k)
	{
		n = k;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
