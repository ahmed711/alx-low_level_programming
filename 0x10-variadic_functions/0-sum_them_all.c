#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: int
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
