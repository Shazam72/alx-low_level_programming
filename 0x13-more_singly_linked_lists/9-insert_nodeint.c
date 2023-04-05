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
	listint_t *cur, *new_node;
	unsigned int i = 0;

	new_node = (listint_t *)malloc(sizeof(struct listint_s));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}
	cur = (*head);
	for (; i < (idx - 1); i++)
	{
		if (cur == NULL)
		{
			return (NULL);
		}
		cur = cur->next;
	}
	new_node->next = cur->next;
	cur->next = new_node;

	return (new_node);
}
