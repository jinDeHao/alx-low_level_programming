#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character count
 * Return: On success l.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
