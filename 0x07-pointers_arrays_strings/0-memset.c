#include "main.h"
/**
 * _memset - fills the first n with the constant b
 * @s: pointer
 * @n: first bytes to filled
 * @b: filled by
 * Return: On success s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
