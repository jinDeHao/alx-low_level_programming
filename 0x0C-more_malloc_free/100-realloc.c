#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size of previously allocated memory
 * @new_size: the size of new allocated memory
 * Return: buff
 * on error NULL returned
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
		return (NULL);
	void *buff;

	buff = malloc(new_size);
	if (buff == NULL)
		return (NULL);
	if (ptr == NULL)
		return (buff);
	for (i = 0; i < old_size; i++)
		buff[i] = ptr[i];
	free(ptr);
	return (buff);
}
