#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: address of the header
 * @str: string
 * Return: newest
 * error NULL returned
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newest;
	list_t *old = *head;

	while (str[len])
		len++;
	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);
	newest->str = strdup(str);
	newest->len = len;
	newest->next = NULL;
	if (*head == NULL)
	{
		*head = newest;
		return (newest);
	}
	while (old->next)
		old = old->next;
	old->next = newest;
	return (newest);
}
