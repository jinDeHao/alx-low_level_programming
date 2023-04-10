#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: num of argu
 * @argv: pointer to array of strings
 * Return: On success 0
 * on error 1 returned
 */
int main(int argc, char *argv[])
{
	int i, c = 0, sum = 0, b = 0;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (j < strlen(argv[i]))
		{
			if (!isdigit(*argv[i]))
			{
				c = 1;
				break;
			}
			argv[i]++;
			j++;
		}
		argv[i] -= j;
		if (c != 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			b = 1;
			break;
		}
	}
	if (b == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
