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

	while (str[l] > '\0')
		l++;
	
	if (l == 0 || str == NULL)
		return (NULL);

	buff = malloc(l * sizeof(char));
	for (i = 0; str[i]; i++)
		buff[i] = str[i];

	return (buff);
}
