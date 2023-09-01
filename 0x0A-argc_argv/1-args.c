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
	if (*argv || !*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
