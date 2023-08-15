#include "main.h"

/**
 * print_times_table - Entry point
 * @n: size of the table
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n + 1 && n >= 0 && n <= 15; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			if (i * j > 99)
			{
				_putchar((i * j) / 100 + '0');
				_putchar(((i * j) / 10) % 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar(i * j + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
				if (i * (j + 1) < 100)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
