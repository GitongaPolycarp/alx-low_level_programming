#include "lists.h"

/**
 * print_listint_safe - prints a listint
 * @head: 
 * Return: 
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *next_node;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		next_node = current->next;
		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
		current = next_node;
	}
	return (count);
}
