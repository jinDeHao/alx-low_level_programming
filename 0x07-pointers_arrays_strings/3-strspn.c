#include "main.h"
/**
 * _strspn - Entry point
 * @s: string
 * @accept: string
 * Return: Always num (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;

	while (*accept)
	{
		for (i = 0; s[i]; i++)
		{
			if (*accept == s[i])
			{
				num++;
				break;
			}
		}
		accept++;
	}
	return (num);
}
