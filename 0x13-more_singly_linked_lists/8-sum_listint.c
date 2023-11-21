#include "lists.h"

/**
 * sum_listint - returns the sum of all data of listint
 * @head: first node in list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *num = head;

	while (num)
	{
		sum += num->n;
		num = num->next;
	}
	return (sum);
}
