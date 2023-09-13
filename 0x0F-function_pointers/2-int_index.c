/**
 * int_index - Entry point
 * @array: array
 * @size: size
 * @cmp: function pointer
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (!array || !cmp || !size)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j)
		{
			return (i);
		}
	}

	return (-1);
}
