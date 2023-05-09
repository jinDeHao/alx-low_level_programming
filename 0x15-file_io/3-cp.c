#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void arg_error(int arg_num);
char *mall_error(char *to_file);
/**
 * main - Entry point
 * @argc: num of argument
 * @argv: pointer to array of strings
 * Return: Always 1 (on Success)
 */
int main(int argc, char *argv[])
{
	int fd, size_read, er;
	char *buff;

	arg_error(argc);
	buff = mall_error(argv[2]);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	size_read = read(fd, buff, 1024);
	er = close(fd);
	if (er == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	er = write(fd, buff, size_read);
	if (er == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	er = close(fd);
	if (er == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	free(buff);
	return (0);
}

/**
 * arg_error - is the right num of argument
 * @arg_num: number of argument
 */
void arg_error(int arg_num)
{
	if (arg_num != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * mall_error - creat buffer and check for error
 * @to_file: file name
 * Return: the buffer
 */
char *mall_error(char *to_file)
{
	char *buff;

	buff = malloc(1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
		exit(99);
	}
	return (buff);
}
