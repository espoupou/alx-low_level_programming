#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: file content
 * Return: status 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	n = write(fd, text_content, n);
	if (n == -1)
		return (-1);

	close(fd);
	return (1);
}
