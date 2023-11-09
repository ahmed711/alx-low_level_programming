#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: double linked list
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	int nodes;

	tmp = (dlistint_t *) h;
	nodes = 0;
	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
