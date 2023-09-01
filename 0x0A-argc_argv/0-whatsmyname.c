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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
