#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @n: value
 * @head: point to head
 * Return: the new list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *reset = *head, *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
	}
	tmp->next = new;
	new->prev = tmp;
	*head = reset;
	return (*head);
}
