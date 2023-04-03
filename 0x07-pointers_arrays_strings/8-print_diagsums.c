#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of to diagonals of square
 * @a: the square
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * (size + 1)];
		i++;
	}
	i--;
	while (i >= 0)
	{
		sum2 += a[i * size + size - i - 1];
		i--;
	}
	printf("%d, %d\n", sum1, sum2);
}
