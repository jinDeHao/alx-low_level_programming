#include "main.h"
/**
 * cap_string - writes the character c to stdout
 * @c: The character to print
 * Return: On success c;
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			if (i == 0 ||
			c[i - 1] == ' ' ||
			c[i - 1] == '\t' ||
			c[i - 1] == '\n' ||
			c[i - 1] == ',' ||
			c[i - 1] == ';' ||
			c[i - 1] == '.' ||
			c[i - 1] == '!' ||
			c[i - 1] == '?' ||
			c[i - 1] == '"' ||
			c[i - 1] == '(' ||
			c[i - 1] == ')' ||
			c[i - 1] == '{' ||
			c[i - 1] == '}')
			{
				c[i] -= 32;
			}
		}
		i++;
	}
	c[i] = '\0';
	return (c);
}
