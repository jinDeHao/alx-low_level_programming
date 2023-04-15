#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: length
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}
/**
 * is_digit - check if is it digit
 * @s: the string
 * Return: on success 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - multiplies two positive numbers.
 * @argc: number of argument
 * @argv: pointer to array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int *res, len1, len2, len, i, s, a = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (res == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		s = 0;
		for (len2 = _strlen(argv[2]) - 1; len2 >= 0; len2--)
		{
			s += res[len1 + len2 + 1] + ((argv[1][len1] - 48) * (argv[2][len2] - 48));
			res[len1 + len2 + 1] = s % 10;
			s /= 10;
		}
		if (s > 0)
			res[len1 + len2 + 1] += s;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a == 1)
			_putchar(res[i] + 48);

	}
	if (a == 0)
		_putchar(48);
	_putchar('\n');
	free(res);
	return (0);
}
