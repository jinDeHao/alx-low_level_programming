#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints alinked list.
 * @head: the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const void *add;
	const listint_t *old, *current = head;
	
	if (head == NULL)
		exit(98);
	while (current)
	{
		add = current;
		printf("[%p] %d\n", add, current->n);
		num++;
		if (head < old)
		{
			printf("-> [%p] %d\n", add, current->n);
			exit(98);
		}
		old = current;
		current = current->next;
	}
	return (num);
}
