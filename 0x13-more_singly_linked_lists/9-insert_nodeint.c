#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: point to pointer which point to node
 * @idx: the index of the list where the new node should be added
 * @n: node's data
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *use = *head, *old, *new;

	for (i = 0; i < idx; i++)
	{
		if (use == NULL)
			return (NULL);
		old = use;
		use = use->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx != 0)
		old->next = new;
	else
		(*head) = new;
	new->n = n;
	new->next = use;
	if (use == NULL)
		new->next = NULL;
	return (new);
}
