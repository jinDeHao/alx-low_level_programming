#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: the list head to free
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
