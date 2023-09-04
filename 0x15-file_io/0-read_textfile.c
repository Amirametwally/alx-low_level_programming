#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: pointer
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *container;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	container = malloc(sizeof(char) * letters);
	if (container == NULL || filename == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, container, letters);
	if (rd == -1)
	{
		free(container);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, container, rd);
	if (wr == -1 || wr != rd)
	{
		free(container);
		close(fd);
		return (0);
	}

	free(container);
	close(fd);
	return (wr);
}
