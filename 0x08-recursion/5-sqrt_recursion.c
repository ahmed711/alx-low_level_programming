#include "main.h"

/**
 * square - Entry point
 * @n: integar
 * @i: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int square(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (square(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}

	return (square(n, 1));
}
