#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: sep between chars
 * @n: int
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
