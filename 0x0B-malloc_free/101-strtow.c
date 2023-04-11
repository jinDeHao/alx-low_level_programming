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
	int i, len = 0, h = 0, w = 0, es = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[len] != '\0')
	{
		if (str[len] != ' ')
		{	
			if (str[len - 1] == ' ')
			{	
				h++;
				es = 1;
			}
			if (es != 1 &&
			(str[len + 1] == ' ' || str[len + 1] == '\0'))
				h++;
		}
		len++;
	}
	len = 0;
	buff = malloc(h * sizeof(char *));
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
