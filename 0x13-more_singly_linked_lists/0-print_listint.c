#include "lists.h"

/**
 * print_listint - prints int data
 * @h: head pointer
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
