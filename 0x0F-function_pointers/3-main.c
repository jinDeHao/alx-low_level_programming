#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations.
 * @argc: number of arguments
 * @argv: pointer to array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || *(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0) ||
		(*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
