#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint -  reverses alinked list.
 * @head: point to pointer which point to linked list.
 * Return: the address of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	int i = 0;
	listint_t *old, *current, *use;

	use = *head;
	if (use == NULL)
		return (NULL);
	while (use)
	{
		current = use;
		use = use->next;
		if (i == 0)
			current->next = NULL;
		else
			current->next = old;
		old = current;
		i++;
	}
	*head = current;
	return (current);
}
