#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: pointer to the head of the list
 * @index: index to where to put the new node
 * Return: 1 if succeed otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev = *head,  *tmp;

	if (prev == NULL)
		return (-1);

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}
	for (i = 0; i < index - 1 && prev != NULL; i++)
		prev = prev->next;

	if (i == index - 1)
	{
		tmp = prev->next;
		prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
