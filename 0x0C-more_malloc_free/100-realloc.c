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
	char *buff, *ptr1;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	buff = malloc(new_size);
	if (buff == NULL)
		return (NULL);
	ptr1 = ptr;
	for (i = 0; i < old_size; i++)
		buff[i] = ptr1[i];
	free(ptr);
	return (buff);
}
