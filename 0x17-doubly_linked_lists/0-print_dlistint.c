#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: dlistint_t list.
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", node->n);
		n++;
		node = node->next;
	}
	return (n);
}
