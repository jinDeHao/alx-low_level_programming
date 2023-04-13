#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: buff
 */
void *malloc_checked(unsigned int b)
{
	void *buff;

	buff = malloc(b);
	if (buff == NULL)
		exit(98);

	return (buff);
}
