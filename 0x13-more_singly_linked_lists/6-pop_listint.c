#include "lists.h"

/**
 * pop_listint - function that delete the head node of
 * a listint_t list
 * @head: pointer to the head of the list
 * Return: head node value after deletion or 0 when list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head == NULL || head == NULL)
		return (n);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
