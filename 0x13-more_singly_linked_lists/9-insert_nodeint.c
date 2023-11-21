#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a list
 * @head: pointer..
 * @idx: ...index
 * @n: data
 * Return: pointer to new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (i = 1; i < idx && current->next; i++)
	{
		current = current->next;
	}

	if (i != idx)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
