#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer that point to node
 */
void free_listint2(listint_t **head)
{
	free(*head);
	head = NULL;
}
