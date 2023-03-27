#include "main.h"
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 */
void rev_string(char *s)
{
	char m[];
	int l, t;

	l = 0;
	t = 0;
	while (*s != '\0')
	{
		s++;
		l++;
	}
	s--;
	while (l > 0)
	{
		m[t] = *s;
		s--;
		l--;
		t++;
	}
	s* = m[];
}
