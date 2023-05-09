#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename
 * @text_content: the file content
 * Return: status 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (-1);

	for (n = 0; text_content[n]; n++)
		;

	n = write(fd, text_content, n);
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}
