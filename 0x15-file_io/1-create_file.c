#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * @filename: yes, you'r right
 * @text_content: the content of the created file
 * Return: 1 on Success
 * on error -1 returned
 */
int create_file(const char *filename, char *text_content)
{
	int fd, as_error;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "\0";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);
	as_error = write(fd, text_content, strlen(text_content));
	if (as_error == -1)
		return (as_error);
	close(fd);
	return (1);
}
