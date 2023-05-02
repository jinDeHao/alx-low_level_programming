#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of alinked list.
 * @head: point to pointer which point to node
 * @index: node to delete
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *use = *head, *del;

	for (i = 0; i < index; i++)
	{
		if (use == NULL)
			return (-1);
		del = use;
		use = use->next;
	}
	if (use == NULL)
		return (-1);
	if (index != 0)
		del->next = use->next;
	else
		(*head) = use->next;
	free(use);
	return (1);

}
