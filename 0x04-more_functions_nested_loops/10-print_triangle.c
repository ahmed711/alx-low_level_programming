#include "main.h"

/**
 * print_triangle - Entry point
 * @size: triangle length
 * Description: 'print a triangle'
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
