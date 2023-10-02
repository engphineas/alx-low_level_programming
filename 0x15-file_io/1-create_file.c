#include "main.h"

/**
 * create_file - function to create a file.
 * @filename: pointer to the file name to create.
 * @text_content: A pointer to a string of chars to write into the file.
 *
 * Return: 1 If successful or -1 if failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_data, write_chars, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_chars = write(file_data, text_content, length);

	if (file_data == -1 || write_chars == -1)
		return (-1);

	close(file_data);

	return (1);
}
