#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer point to node
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
