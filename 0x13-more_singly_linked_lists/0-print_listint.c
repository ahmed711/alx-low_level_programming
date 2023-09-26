#include "lists.h"

/**
 * print_listint - Entry point
 * @h: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);

}
