#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer
 * @str: string
 * Return: newest
 * on errot NULL returned
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newest;
	unsigned int len = 0;

	while (str[len])
		len++;
	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);
	newest->str = strdup(str);
	newest->len = len;
	newest->next = *head;
	*head = newest;
	return (*head);
}
