#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = head && *head ? *head : NULL;
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
