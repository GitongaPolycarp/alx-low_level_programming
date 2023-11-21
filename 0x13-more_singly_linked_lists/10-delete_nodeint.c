#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint
 * @head: pointer
 * @index: index
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}

	current = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index && current->next; i++)
	{
		current = current->next;
	}

	if (i != index || !current->next)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
