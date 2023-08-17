#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Description: print numbers 1-100
 * Return: Always 0.
 */

int main(void)
{
	long int i, j, max_val;

	j = 612852475143;
	max_val = 0;

	while (j > 1)
	{
		for (i = 2; i <= j; i++)
		{
			if (j % i == 0)
			{
				max_val = i > max_val ? i : max_val;
				j /= i;
				break;
			}
		}
	}
	printf("%ld\n", max_val);
	return (0);
}
