#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements
 * @size: size of each one
 * Return: buff
 * on error NULL returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buff;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buff = malloc(nmemb * size);
	if (buff == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		buff[i] = 0;
	return (buff);
}
