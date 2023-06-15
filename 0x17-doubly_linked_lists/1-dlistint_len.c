#include "lists.h"

/**
 * dlistint_len - get num of elements in linked list
 * @h: dlistint_t list.
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *node = h;

	/*
	*to set the node to head
	*while (node->prev)
	*	node = node->prev;
	*/

	while (node)
	{
		n++;
		node = node->next;
	}
	return (n);
}
