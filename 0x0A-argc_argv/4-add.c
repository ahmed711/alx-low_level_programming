#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: command line arguments
 * Description: print program name
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, total;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	total = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
