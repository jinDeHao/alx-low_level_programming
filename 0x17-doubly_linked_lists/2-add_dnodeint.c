#include "lists.h"

/**
 * add_dnodeint - add node at first
 * @head: pinter to address of head of list
 * @n: the value of the elment
 * Return: the head of list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (*head && (*head)->prev)
		*head = (*head)->prev;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
