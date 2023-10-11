#include "search_algos.h"

/**
 * prob - shearch using the probabilation
 * @array: the list
 * @low: the start of the list
 * @high: the start of the list
 * @value: the value looking for
 * Return: the index if success -1 when failed
 */
size_t prob(int *array, int value, size_t low, size_t high)
{
	size_t pos = low + (((double)(high - low) /
						 (array[high] - array[low])) *
						(value - array[low]));
	if (pos >= high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	if (low > high)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] > value)
		return (prob(array, value, low, pos - 1));
	return (prob(array, value, pos + 1, high));
}

/**
 * interpolation_search - shearch using the prob
 * @array: the list
 * @size: the size of the list
 * @value: the value looking for
 * Return: the index if success -1 when failed
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (prob(array, value, 0, size - 1));
}
