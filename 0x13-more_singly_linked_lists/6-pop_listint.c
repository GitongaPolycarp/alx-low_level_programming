#include "lists.h"

/**
 * pop_listint - deletes head node of listint and returns head node data
 * @head: pointer to elemnt of linked list
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
		return (0);
	temp = (*head)->next;
	num = (*head)->n;
	free(head);
	*head = temp;

	return (num);
}
