#include "main.h"
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 */
void rev_string(char *s)
{
	int l, t;
	char rev;

	l = 0;
	rev = s[0];
	while (s[l] != '\0')
	{
		l++;
	}
	for (t = 0; t < l; t++)
	{
		l--;
		rev = s[l];
		s[l] = s[t];
		s[t] = rev;
	}
}
