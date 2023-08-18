#include "lists.h"
/**
 * add_dnodeint - add new node at dlistint_t beginning
 * @head: head node of list
 * @n: value to add
 * Return: ptr to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *node = NULL;

	node = (dlistint_t *) malloc(sizeof(*node));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->prev)
		tmp = tmp->prev;
	tmp->prev = node;
	node->next = tmp;
	*head = node;
	return (node);
}
