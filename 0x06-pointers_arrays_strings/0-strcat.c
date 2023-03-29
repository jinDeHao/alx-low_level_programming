#include "main.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: The character to.
 * @src: The character from.
 * Return: On success dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		i++;
		src++;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
