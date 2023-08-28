#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: an array
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j, n;

	n = (unsigned int) sizeof(a);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
