#include "main.h"

/**
 * _isdigit - Entry point
 * @c: character to check
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
