#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *buff;

	buff = malloc(b);
	if (buff == NULL)
		exit(98);

	return (buff);
}
