#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that new at the beginning of a list
 * @head: pointer to the head of the list
 * @n: element to add to the list
 * Return: pointer the address of the new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
