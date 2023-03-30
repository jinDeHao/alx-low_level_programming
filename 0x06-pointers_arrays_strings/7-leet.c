#include "main.h"
/**
 * leet - writes the character c to stdout
 * @c: The character to print
 * Return: On success c.
 */
char *leet(char *c)
{
	char num[] = "43071", let[] = "AaEeOoTtLl";
	int i, l, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		l = 0;
		j = 0;
		while (let[l] != '\0')
		{
			if (c[i] == let[l])
			{
				c[i] = num[j];
			}
			j += l % 2;
			l++;
		}
	}
	return (c);
}
