#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: buff
 * on error NULL returned
 */
char *str_concat(char *s1, char *s2)
{
	char *buff;
	int i, j = 0, l = 0;

	if (s1 != NULL)
	{
		while (s1[j] != '\0')
			j++;
	}
	if (s2 != NULL)
	{
		while (s2[l] != '\0')
			l++;
	}
	buff = malloc((l + j + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		buff[i] = s1[i];

	for (i = 0; i < l; i++)
		buff[j + i] = s2[i];

	buff[j + l] = '\0';
	return (buff);
}
