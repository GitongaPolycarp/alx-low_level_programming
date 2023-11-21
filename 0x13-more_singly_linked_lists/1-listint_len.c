#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint
 * @h: nodes
 *
 * Return: number of elements in linked listimt
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
