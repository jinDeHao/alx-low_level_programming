#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c: the character
 * Return: buff
 * on error NULL returnd
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int i;

	if (size == 0)
		return (0);

	buff = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		buff[i] = c;

	return (buff);
}
