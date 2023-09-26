#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: nodes
 * @index: index
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	for (i = 0, tmp = head; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	return (tmp);
}
