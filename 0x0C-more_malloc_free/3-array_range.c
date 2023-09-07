#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: min
 * @max: max
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		*(array + i - min) = i;
	}
	return (array);
}
