#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters:number to read
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, n);

	close(fd);

	free(buf);

	return (n);
}
