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
	int i, l = 0;
	char *buff;

	while (*str >= '\0')
	{
		l++;
		str++;
	}
	str -= l;
	if (l == 0)
		return (0);

	buff = malloc(l * sizeof(char));
	for (i = 0; i <= l; i++)
		buff[i] = str[i];

	return (buff);
}
