#include "main.h"

/**
 * prime - Entry point
 * @n: integar
 * @i: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - Entry point
 * @n: integar
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime(n, 2));
}
