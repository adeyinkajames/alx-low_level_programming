#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * filename: The Name of the file.
 * text_content: Null terminated string to add to the end of the file.
 * Return: 1 on success and -1 on failure
 *	1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
/* Return -1 to indicate failure in opening the file.*/
	if (text_content != NULL)
	    {
	for (len = 0; text_content[len];)
		len++;
	}
	/*Determine the length of the text content*/
	o = open(filename, O_WRONLY | O_APPEND);
	    w = write(o, text_content, len);

	        if (o == -1 || w == -1)
			        return (-1);
			/* Open the file in append mode*/
			/* Write the text content to the file.*/
		close(o);
		/* Close the file*/
		return (1);
		 /*Return 1 to indicate success*/
}
