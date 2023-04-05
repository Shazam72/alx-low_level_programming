#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that free a listint_t list
 * @head: pointer to the head of the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		*head = NULL;
	}
}
