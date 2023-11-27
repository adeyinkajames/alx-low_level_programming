#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print to STDOUT.
 * filename: text file being read
 * letters: the number of letters it should read and print
 * Return: actual number of letters it read and printed
 * Rrturn: 0 when write fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	/** Open the file*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	/** Read the contents of the file into a string.*/
	buf = malloc(sizeof(char) * letters);
		t = read(fd, buf, letters);

	/** Print the contents of the file to the standard output*/
		w = write(STDOUT_FILENO, buf, t);

		free(buf);
		close(fd);
		return (w);
}
