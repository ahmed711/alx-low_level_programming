#include "main.h"

/**
 * factorial - Entry point
 * @n: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
