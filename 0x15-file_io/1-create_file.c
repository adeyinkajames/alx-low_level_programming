#include "main.h"

/**
 * create_file - Funtion that create a file.
 * @filename: Name of the file created.
 * @text_content: text_content.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	text_content = "";

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(op, text_content, len);

		if (op == -1 || w == -1)
		return (-1);

		close(op);
		return (1);
}
