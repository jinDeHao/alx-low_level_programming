#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: from
 * @max: to
 * Return: buff
 * on error NULL returned
 */
int *array_range(int min, int max)
{
	int *buff, i;

	if (min > max)
		return (NULL);
	buff = malloc(sizeof(int) * (max - min + 1));
	if (buff == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		buff[i] = min++;
	return (buff);
}
