#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: pointer to array of string
 * Return: buff
 * on error NULL returned
 */
char *argstostr(int ac, char **av)
{
	char *buff;
	int i, j, k = 0, g = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;
	buff = malloc((k + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			buff[g] = av[i][j];
			g++;
		}
		buff[g] = '\n';
		g++;
	}
	return (buff);
}
