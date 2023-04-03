#include "main.h"
/**
 * _memcpy - copies from memory to memory
 * @dest: copy to memory
 * @src: copy from memory
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	dest -= i;
	return (dest);
}
