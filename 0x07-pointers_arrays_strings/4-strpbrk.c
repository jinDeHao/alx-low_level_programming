#include "main.h"
/**
 * _strpbrk - writes the character c to stdout
 * @s: The string
 * @accept: The string
 * Return: On success s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}
