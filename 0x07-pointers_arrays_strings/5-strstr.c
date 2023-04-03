#include "main.h"
/**
 * _strstr - writes the character c to stdout
 * @haystack: The character from
 * @needle: The character to
 * Return: On success haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
