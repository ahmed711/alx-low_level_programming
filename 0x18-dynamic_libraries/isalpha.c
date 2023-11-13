#include "main.h"

/**
 * _isalpha - Entry point
 * @c: check if c is an alphabet
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (((int) c >= 65 && (int) c <= 90) || ((int) c >= 97 && (int) c <= 122))
	{
		return (1);
	}
	return (0);
}
