#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (*src != '\0' && j < n)
	{
		*dest = *src;
		i++;
		dest++;
		j++;
		src++;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
