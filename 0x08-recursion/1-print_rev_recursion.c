#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: string
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
