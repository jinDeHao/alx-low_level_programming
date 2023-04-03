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

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				num++;
				break;
			}
		}
		s++;
	}
	return (num);
}
