#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to node
 * @n: the new element to add
 * Return: the address of the new element
 * on error NULL returned
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (old->next != NULL)
		old = old->next;
	old->next = new;
	return (new);
}
