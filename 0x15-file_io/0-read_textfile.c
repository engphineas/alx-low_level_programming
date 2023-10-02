#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function to read textfile and print to STDOUT.
 * @filename: text file to be read
 * @letters: num of letters to be read
 * Return: w- number of bytes read and printed
 *        0 if fails and filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *chars_buffer;
	ssize_t file_data;
	ssize_t no_written_chars;
	ssize_t no_read_chars;

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);
	chars_buffer = malloc(sizeof(char) * letters);
	no_read_chars = read(file_data, chars_buffer, letters);
	no_written_chars = write(STDOUT_FILENO, chars_buffer, no_read_chars);

	free(chars_buffer);
	close(file_data);
	return (no_written_chars);
}
