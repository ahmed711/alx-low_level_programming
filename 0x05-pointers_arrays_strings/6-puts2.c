#include "main.h"

/**
 * puts2 - Entry point
 * @s: pointer to n address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void puts2(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
