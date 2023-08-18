#include "lists.h"
/**
 * dlistint_len - get numbers of elements in a dlistint_t list
 * @h: head node of list to count
 * Return: number of printed node
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t n = 0;

	if (!h)
		return (n);
	tmp = (dlistint_t *)h;
	while (tmp->prev)
		tmp = tmp->prev;
	for (; tmp; tmp = tmp->next, n++)
		;
	return (n);
}
