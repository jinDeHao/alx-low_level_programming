#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: point to head
 * @idx: index to node
 * @n: the value
 * Return: the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 1;

	if (!idx)
		return (add_dnodeint(h, n));
	if (!*h)
		return (NULL);
	while (tmp && i != idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (idx != i)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (tmp)
	{
		new->prev = tmp;
		new->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
