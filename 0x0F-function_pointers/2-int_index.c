#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index
 * on error -1 returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return ((*cmp)(array[i]));
		}
	}
	return (-1);
}
