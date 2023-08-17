#include "main.h"

/**
 * sizeofnumber - Entry
 * @n: number
 * Description: get n size
 * Return: size or 10 (success)
 */

int sizeofnumber(int n)
{
	int i;

	i = 1;
	while (n >= 10)
	{
		i *= 10;
		n /= 10;
	}
	return (i);
}
/**
 * print_number - Entry point
 * @n: number to print
 * Description: 'print number'
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int size, newnu;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	newnu = n;
	for (size = sizeofnumber(n); size >= 1; size /= 10)
	{
		_putchar(newnu / size + '0');
		newnu = newnu % size;
	}
}
