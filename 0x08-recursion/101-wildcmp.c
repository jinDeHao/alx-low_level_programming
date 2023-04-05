#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: On success 1.
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	else
		return (0);
}
