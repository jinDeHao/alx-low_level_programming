#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a copy of the string
 * @str: the string given
 * Return: buff
 * on error NULL returned
 */
char *_strdup(char *str)
{
	char *buff;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	buff = malloc((l + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		buff[i] = str[i];

	return (buff);
}
