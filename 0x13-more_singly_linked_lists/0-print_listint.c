#include "lists.h"

/**
 * print_listint - prints all elements of listint list
 * @h: head pointer to listint list
 * Return: number of nodes in the listint list
 */
size_t print_listint(const listint_t *h)
{
	size_t p = 0;

	if (h == NULL)
		return (0);
	for (p = 0; h != NULL; p++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (p);
}
