#include "lists.h"

/**
 * free_listint2 - frees listint list
 * @head: Pointer to list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *num;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		num = *head;
		*head = (*head)->next;
		free(num);
	}
	*head = NULL;
}
