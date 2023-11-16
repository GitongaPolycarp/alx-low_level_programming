#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		head = tmp;
	}
	free(head->str);
	free(head);
}
