#include "main.h"
#include <unistd.h>
#include <stdlib.h>
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
	ssize_t bytes_read;
	int fd;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buff, letters);
	num_of_letters = write(STDOUT_FILENO, buff, bytes_read);
	free(buff);
	close(fd);
	return (num_of_letters);
}
