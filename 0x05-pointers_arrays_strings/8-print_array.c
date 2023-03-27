#include "main.h"
#include <stdio.h>
/**
 * print_array - writes the character c to stdout
 * @a: The pointer
 * @n: The variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
