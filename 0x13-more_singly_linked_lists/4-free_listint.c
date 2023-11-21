#include "lists.h"

/**
 * free_listint - frees listint list
 * @head: list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
