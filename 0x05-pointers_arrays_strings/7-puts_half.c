#include "main.h"

/**
 * puts_half - Entry point
 * @s: pointer to n address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void puts_half(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = (i + 1) / 2; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
