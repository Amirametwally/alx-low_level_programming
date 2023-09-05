#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>

/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: terminated string to write to the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
