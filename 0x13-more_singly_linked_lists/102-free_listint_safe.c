#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: point to pointer which point to head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *to_free;

	if (*h == NULL)
		return (0);
	while (*h)
	{
		if (*h > (*h)->next)
		{
			to_free = (*h)->next;
			free(*h);
			*h = to_free;
			size++;
		}
		else
		{
			free(*h);
			size++;
			break;
		}
	}
	return (size);
}
