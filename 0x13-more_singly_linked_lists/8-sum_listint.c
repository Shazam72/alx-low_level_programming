#include "lists.h"

/**
 * sum_listint - get the sum of all node value of
 * listint_t list
 * @head: head of the list
 * Return: sum all list element otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
