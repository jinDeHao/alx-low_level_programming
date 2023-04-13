#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes to cat
 * Return: buff
 * on error NULL returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buff;
	unsigned int l1 = 0, l2 = 0, s = 0, i;

	if (s1 == NULL || s2 == NULL)
	{
		buff = malloc(1);
		if (buff == NULL)
			return (NULL);
		*buff = '\0';
	}
	else
	{
		while (s1[l1] != '\0')
			l1++;
		while (s2[l2] != '\0')
			l2++;
		while (s < l1 + l2)
		{
			if (s >= l1 + n)
				break;
			s++;
		}
		buff = malloc(sizeof(char) * (s + 1));
		if (buff == NULL)
			return (NULL);
		for (i = 0; i <= s; i++)
		{
			if (i < l1)
			{
				buff[i] = *s1;
				s1++;
			}
			else
			{
				buff[i] = *s2;
				s2++;
			}
		}
	}
	return (buff);

}