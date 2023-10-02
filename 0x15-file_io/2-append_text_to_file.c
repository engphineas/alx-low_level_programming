#include "main.h"

/**
 * append_text_to_file - function that ppends text at the end of a file.
 * @filename: A pointer to the file name.
 * @text_content: The string to append at the end of the file.
 *
 * Return: 1 if success, -1 if fails or filename is NULL
 *          -1 if the file does not exist or user lacks write permissions
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, written_num_chars, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd_open = open(filename, O_WRONLY | O_APPEND);
	written_num_chars = write(fd_open, text_content, length);

	if (fd_open == -1 || written_num_chars == -1)
		return (-1);

	close(fd_open);

	return (1);
}
