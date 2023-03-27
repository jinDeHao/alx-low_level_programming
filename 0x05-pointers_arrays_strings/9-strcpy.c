#include "main.h"
/**
 * _strcpy - copy the string to the buffer.
 * @src: The pointer
 * @dest: The pointer
 * Return: On success dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
