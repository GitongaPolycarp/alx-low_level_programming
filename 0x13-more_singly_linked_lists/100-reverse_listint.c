#include "lists.h"

/**
 * reverse_listint - reverses a listint list
 * @head: pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *num = *head;
	listint_t *next;

	while (num)
	{
		next = num->next;
		num->next = prev;
		prev = num;
		num = next;
	}

	*head = prev;

	return (prev);
}
