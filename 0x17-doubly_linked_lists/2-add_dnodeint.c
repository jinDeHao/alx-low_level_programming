#include "lists.h"

/**
 * add_dnodeint - add node at first
 * @head: pinter to address of head of list
 * @n: the value of the elment
 * Return: the head of list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *node = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/**
	* while (node->prev)
	*  node = node->prev;
	*/
	new->n = n;
	new->next = node;
	new->prev = NULL;
	node = new;
	return (node);
}
