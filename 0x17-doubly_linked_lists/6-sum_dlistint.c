#include "lists.h"

/**
 * sum_dlistint - get the sum of the all values of a list
 * @head: tha head of the list
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
