#include "main.h"

/**
 * _memset - Entry point
 * @s: string dest
 * @b: char b
 * @n: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
