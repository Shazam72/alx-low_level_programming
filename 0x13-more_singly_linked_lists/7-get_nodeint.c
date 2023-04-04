#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t list
 * @head: head of the list
 * @index: index to get
 * Return: nth node element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *element;

	if (head == NULL)
		return (NULL);
	element = head;
	for (i = 0; i < index; i++)
		element = element->next;
	return (element);
}
