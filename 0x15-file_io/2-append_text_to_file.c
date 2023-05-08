#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: no descreption
 * @text_content: the content of the file
 * Return: 1 on Success
 * on error -1 returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_error;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content)
		w_error = write(fd, text_content, strlen(text_content));
	if (w_error == -1)
		return (w_error);
	close(fd);
	return (1);
}
