#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: the width
 * @height: the height
 * Return: buff
 * on error NULL returned
 */
int **alloc_grid(int width, int height)
{
	int **buff;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	buff = malloc(height * sizeof(int *));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buff[i] = malloc(width * sizeof(int));
		if (buff[i] == NULL)
		{
			while (i >= 0)
			{
				free(buff[i]);
				i--;
			}
			free(buff);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buff[i][j] = 0;
		}
	}
	return (buff);
}
