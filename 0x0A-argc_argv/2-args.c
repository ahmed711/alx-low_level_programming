#include <stdio.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: command line arguments
 * Description: print program name
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
