#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - cp from file to file
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t n, p;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	rw_err(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buf, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		p = write(file_to, buf, n);
		if (p == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}


/**
 * rw_err - print error about read & write file
 * @file_from: from return value
 * @file_to: to return value
 * @argv: argument vector
 * Return: no return
 */

void rw_err(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
