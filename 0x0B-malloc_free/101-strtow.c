#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * num_of_words - count number of words
 * @s: string
 * Return: n
 */
int num_of_words(char *s)
{
	int a, b = 0, n = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			b = 0;
		else
		{
			if (b == 0)
			{
				b = 1;
				n++;
			}
		}
	}
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return buff
 * on error NULL returned
 */
char **strtow(char *str)
{
	char **buff, *ffub;
	int i, len = 0, h, w = 0, es = 0, be;

	h = num_of_words(str);
	if (str == NULL || *str == '\0' || h == 0)
		return (NULL);
	while(*(str + len))
		len++;

	buff = (char **) malloc((h + 1) * sizeof(char *));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (w)
			{
				ffub = (char *) malloc(sizeof(char) * (w + 1));
				if (ffub == NULL)
					return (NULL);
				while (be < i)
					*ffub++ = str[be++];
				*ffub = '\0';
				buff[es] = ffub - w;
				es++;
				w = 0;
			}
		}
		else if (w++ == 0)
			be = i;
	}
	buff[es] = NULL;
	return (buff);
}
