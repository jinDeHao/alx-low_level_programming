#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n - 1] = rev;
		n--;
	}
}
