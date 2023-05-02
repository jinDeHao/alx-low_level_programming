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
	listint_t *use = *h, *to_free;

	if (use == NULL || h == NULL)
		return (0);
	while (use)
	{
		if (use <= use->next)
		{
			free(use);
			size++;
			break;
		}
		to_free = use->next;
		free(use);
		use = to_free;
		size++;
	}
	return (size);
}
