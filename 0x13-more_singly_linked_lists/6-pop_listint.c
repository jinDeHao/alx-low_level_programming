#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer that oint to node
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *use;

	if (*head == NULL)
		return (0);
	use = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = use;
	return (n);
}
