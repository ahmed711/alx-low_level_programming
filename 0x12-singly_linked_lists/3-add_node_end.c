#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: nodes
 * @str: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = str == NULL ? NULL : strdup(str);
	node->len = str == NULL ? 0 : strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = node;

	return (node);

}
