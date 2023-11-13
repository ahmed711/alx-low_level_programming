#include "main.h"

/**
 * _puts - Entry point
 * @s: pointer to n address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
