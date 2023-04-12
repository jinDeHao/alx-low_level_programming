#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string
 * Return buff
 * on error NULL returned
 */
char **strtow(char *str)
{
	char **buff;
	int i, len = 0, h = num_of_words(str), w = 0, es = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	buff = malloc((h + 1) * sizeof(char *));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		w = 0;
		es = 0;
		while (str[len] != '\0')
		{
			if (str[len] != ' ')
			{
				w++;
				es = 1;
			}
			if (str[len] == ' ' && es == 1)
				break;
			len++;
		}
		buff[i] = malloc((w + 1) * sizeof(char));
		if (buff[i] == NULL)
		{
			for (; i >= 0; i--)
				free(buff[i]);
			free(buff);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		es = 0;
		while (*str != '\0')
		{	
			if (*str != ' ')
			{
				*buff[i] = *str;
				es = 1;
				buff[i]++;
			}
			if (*str == ' ' && es == 1)
			{
				*buff[i] = '\0';
				break;
			}
			str++;
		}
		if (i == h - 1)
			*buff[i] = '\0';
	}
	return (buff);
}

/**
 * num_of_words - count number of words
 * @str: the string
 * Return: n
 */
int num_of_words(char *str)
{
	int a, b = 0, n = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
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
