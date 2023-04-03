#include "main.h"
/**
 * _strchr - start from character
 * @s: string
 * @c: character to start from
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
