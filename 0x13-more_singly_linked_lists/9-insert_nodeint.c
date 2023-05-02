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
		if (i = idx - 1)
			old = use;
		use = use->next;
	}
	if (use == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	old->next = new;
	new->n = n;
	new->next = use;
	return (new);
}
