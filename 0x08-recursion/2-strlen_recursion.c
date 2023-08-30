#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: string
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
