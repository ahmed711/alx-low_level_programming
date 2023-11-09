#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: double linked list
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	int nodes;

	tmp = (dlistint_t *) h;
	nodes = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
