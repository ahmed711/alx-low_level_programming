#include "lists.h"

/**
 * free_listint - Entry point
 * @head: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
