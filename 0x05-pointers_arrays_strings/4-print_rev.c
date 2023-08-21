#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer to n address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
