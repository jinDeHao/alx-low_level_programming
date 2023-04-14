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
	void *buff;
	if (nmemb == 0 || size == 0)
		return (NULL);
	buff = malloc(nmemb * size);
	if (buff == NULL)
		return (NULL);
	return (buff);
}
