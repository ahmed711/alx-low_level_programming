#include "lists.h"

/**
 * free_list - Entry point
 * @head: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
