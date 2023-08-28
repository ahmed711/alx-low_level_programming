#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: an array
 * @size: array size
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, total_right, total_left;

	total_right = 0;
	total_left = 0;

	for (i = 0; i < size; i++)
	{
		total_right += *(a + size * i + i);
		total_left += *(a + size * i + size - i - 1);
	}
	printf("%d, %d\n", total_right, total_left);
}
