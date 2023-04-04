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

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return ((*head)->n);
}
