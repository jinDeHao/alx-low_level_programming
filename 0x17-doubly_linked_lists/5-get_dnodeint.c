#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: the pointer of hezd
 * @index: the index of of the list
 * Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
