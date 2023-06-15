#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: point to head
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);
	if (!index)
		*head = tmp->next;
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
