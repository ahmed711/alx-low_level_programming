#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: array
 * @size: size
 * @action: function pointer
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
