#include "main.h"
/**
 * _strchr - start from character
 * @s: string
 * @c: character to start from
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
		s++;
	}
	*s = '\0';
	s -= i;
	return (0);
}
