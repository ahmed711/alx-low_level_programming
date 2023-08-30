#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: integar
 * @y: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
