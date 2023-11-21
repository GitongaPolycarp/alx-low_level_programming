#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint
 * @head: first node
 * @index: index of the node
 * Return: if node does not exit NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}

	return (current);
}
