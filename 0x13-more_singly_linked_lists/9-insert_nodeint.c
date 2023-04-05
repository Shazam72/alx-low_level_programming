#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index idx
 * @head: pointer to the head of the list
 * @idx: index to where to put the new node
 * @n: new node value
 * Return: adress of the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev = *head, *new;

	if (prev == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = prev;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && prev != NULL; i++)
		prev = prev->next;
	if (i == idx - 1)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = prev->next;
		prev->next = new;
		return (new);
	}
	return (NULL);
}
