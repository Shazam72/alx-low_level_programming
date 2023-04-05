#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	void *pt;

	head = NULL;
	printf("-----------------\n");
	pt = insert_nodeint_at_index(NULL, -12, 4096);
	printf("Nous eumes %p", pt);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
