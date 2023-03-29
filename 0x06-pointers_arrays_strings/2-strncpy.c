#include "main.h"
/**
 * _strncpy - writes the character c to stdout
 * @dest: The character
 * @src: The character to copy
 * @n: the limit
 * Return: On success dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
