#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * @separator: sep between chars
 * @n: int
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		printf("%s", arg ? arg : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
