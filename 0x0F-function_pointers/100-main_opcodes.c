#include <stdio.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned char (*fun_pointer);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}

	fun_pointer = (unsigned char *)main;
	for (i = 0, j = atoi(argv[1]); i < j; i++)
	{
		printf("%02hhx", fun_pointer[i]);
		if (i < j - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
