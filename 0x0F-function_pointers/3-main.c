#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		return (99);
	}

	if (strchr("/%", argv[2][0]) && !atoi(argv[3]))
	{
		printf("Error\n");
		return (100);
	}

	i = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);

	return (0);
}
