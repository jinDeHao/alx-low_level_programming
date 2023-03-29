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
		i++;
		dest++;
		j++;
		src++;
	}
	*dest = *src;
	return (dest);
}
