#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	i = 0;
	tmp = head && *head ? *head : NULL;
	if (tmp)
	{
		i = tmp->n;
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}

	return (i);
}
