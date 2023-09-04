#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: args
 * @av: array of strings
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *s;

	if (!ac || !av)
	{
		return (NULL);
	}

	size = 0;
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		}
		size += j + 1;
	}

	s = malloc((size * sizeof(char)) + 1);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
