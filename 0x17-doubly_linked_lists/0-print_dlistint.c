#include "lists.h"
/**
 * print_dlistint - print elements of a dlistint_t list
 * @h: head node of list to print
 * Return: number of printed node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t n = 0;

	if (!h)
		return (n);
	tmp = (dlistint_t *)h;
	while (tmp->prev)
		tmp = tmp->prev;
	for (; tmp; tmp = tmp->next, n++)
		printf("%d\n", tmp->n);
	return (n);
}
