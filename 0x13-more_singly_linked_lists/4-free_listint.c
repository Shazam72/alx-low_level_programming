#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free a listint_t list
 * @head: head of the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
