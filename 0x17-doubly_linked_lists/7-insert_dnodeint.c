#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert at nth node of a dlistint_t list
 * @h: head node of list
 * @idx: index of the new node
 * @n: value to add
 * Return: nth node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *node = NULL;
	size_t i = 0;

	node = (dlistint_t *) malloc(sizeof(*node));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (!*h)
	{
		*h = node;
		return (node);
	}
	tmp = *h;
	while (tmp->prev)
		tmp = tmp->prev;
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	for (; tmp; tmp = tmp->next, i++)
		if (i == idx - 1)
		{
			node->next = tmp->next;
			node->prev = tmp;
			tmp->next = node;
			if (node->next)
				node->next->prev = node;
			return (node);
		}
	return (NULL);
}
