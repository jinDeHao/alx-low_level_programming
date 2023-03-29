#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @str: The string to change from lowercase to uppercase.
 * Return: str.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		i++;
		str++;
	}
	*str = '\0';
	str -= i;
	return (str);
}
