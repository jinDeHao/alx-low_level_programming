#include "main.h"
/**
 * rot13 - the character c to stdout
 * @c: The character to print
 * Return: On success c.
 */
char *rot13(char *c)
{
	char let1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char let2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		while (let1[j] != '\0')
		{
			if (c[i] == let1[j])
			{
				c[i] = let2[j];
				break;
			}
			j++;
		}
	}
	return (c);
}
