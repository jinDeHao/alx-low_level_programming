#include "main.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: The character to.
 * @src: The character from.
 * Return: On success dest.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
