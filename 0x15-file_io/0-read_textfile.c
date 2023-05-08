#include "main.h"
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it.
 * @filename: yes, it's a file name
 * @letters: num of letters
 * Return: num of letters
 * on error 0 returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_of_letters;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(*filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buff, letters);
	close(fd);
	num_of_letters = write(1, buff, letters);
	return (num_of_letters);
}
