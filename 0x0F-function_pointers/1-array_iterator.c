#include <stdlib>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
