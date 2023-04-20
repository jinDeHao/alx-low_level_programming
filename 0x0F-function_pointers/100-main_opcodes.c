#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argc: number of arg
 * @argv: pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *array;

	array = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i == atoi(argv[1]) - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
