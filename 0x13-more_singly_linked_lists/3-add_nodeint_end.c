#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - function that new at the end of a list
 * @head: pointer to the head of the list
 * @n: element to add to the list
 * Return: pointer the address of the new element otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (h == NULL)
		*head = new;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	return (new);
}
