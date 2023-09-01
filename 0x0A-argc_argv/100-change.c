#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: command line arguments
 * Description: print program name
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, c25, c10, c5, c2, c1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	i = atoi(argv[1]);

	c25 = i / 25;
	c10 = (i % 25) / 10;
	c5 = ((i % 25) % 10) / 5;
	c2 = (((i % 25) % 10) % 5) / 2;
	c1 = (((i % 25) % 10) % 5) % 2;

	printf("%d\n", c25 + c10 + c5 + c2 + c1);
	return (0);
}
