#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: grid
 * @height: int
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i > 0; i--)
	{
		free(grid[i - 1]);
	}

	free(grid);
}
