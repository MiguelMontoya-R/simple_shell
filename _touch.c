#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: Name file.
 * @text_content: the number of letters it should read and print.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	len = 0;

	while (text_content[len] != '\0')
		len++;

	num_bytes = write(fd, text_content, len);

	close(fd);

	if (num_bytes < 0 || len != num_bytes)
		return (-1);

	return (1);
}
