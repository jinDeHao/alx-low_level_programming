#include "lists.h"

/**
 * add_nodeint - add node at first
 * @head: pinter to address of head of list
 * @n: the value of the elment
 * Return: the head of list
*/
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
