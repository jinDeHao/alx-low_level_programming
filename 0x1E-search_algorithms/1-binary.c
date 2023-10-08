#include "search_algos.h"
/**
 * printarr - print list
 * @array: the list
 * @start: the start of the list
 * @end: the start of the list
 */
void printarr(int *array, size_t start, size_t end)
{
	size_t i = start;

	if (start > end)
		return;
	printf("Searching in array: ");
	while (i <= end)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i++]);
	}
	printf("\n");
}

/**
 * binary_help - shearch using the dictionary technic
 * @array: the list
 * @start: the start of the list
 * @end: the start of the list
 * @value: the value looking for
 * Return: the index if success -1 when failed
 */
size_t binary_help(int *array, int value, size_t start, size_t end)
{
	size_t i = (start + end) / 2;

	printarr(array, start, end);
	if (start > end)
		return (-1);
	if (array[i] == value)
	{
		return (i);
	}
	if (array[i] > value)
		return (binary_help(array, value, start, i - 1));
	return (binary_help(array, value, i + 1, end));
}

/**
 * binary_search - shearch using the dictionary technic
 * @array: the list
 * @size: the size of the list
 * @value: the value looking for
 * Return: the index if success -1 when failed
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_help(array, value, 0, size - 1));
}
