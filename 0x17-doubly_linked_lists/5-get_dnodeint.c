#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node of a dlistint_t list
 * @head: head node of list to count
 * @index: index of the node to get
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	size_t i = 0;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp->prev)
		tmp = tmp->prev;
	for (; tmp; tmp = tmp->next, i++)
		if (i == index)
			return (tmp);
	return (NULL);
}
