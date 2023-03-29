#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		return (s1 - s2);
	}
	return (0);
}
