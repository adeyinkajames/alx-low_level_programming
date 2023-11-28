#include "main.h"

/**
 * create_file - Funtion that create a file.
 * filename: Name of the file created.
 * text_content: terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	if (!filename || !text_content)
	{
		return -1;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(fd, text_content, len);

		if (fd == -1 || w == -1)
		return (-1);

		close(fd);
		return (1);
}