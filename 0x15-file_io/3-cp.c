#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function allocates 1024 bytes to a buffer.
 * @file: pointer to the name of the file whose chars is stored by the buffer.
 *
 * Return: A pointer to the new buffer allocated bytes.
 */
char *create_buffer(char *file)
{
	char *buffer_chars;

	buffer_chars = malloc(sizeof(char) * 1024);

	if (buffer_chars == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_chars);
}

/**
 * close_file - A function to close the file descriptors.
 * @fd: pointer to file descriptor to close.
 */
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function to copy the contents of a file to another.
 * @argc: The number of arguments supplied.
 * @argv: An array of arguments in pointers.
 *
 * Return: 0 if success.
 *
 * Description: exit code 97 ff the argument count is incorrect.
 * 98 if source file does not exist or cannot be read.
 * 99 if dest_file cannot be written or created
 * 100 if dest_file or source_file cannot be closed.
 */
int main(int argc, char *argv[])
{
	int source, dest, read_file, write_file;
	char *buffer_mem;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_mem = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	read_file = read(source, buffer_mem, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer_mem);
			exit(98);
		}

		write_file = write(dest, buffer_mem, read_file);
		if (dest == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer_mem);
			exit(99);
		}

		read_file = read(source, buffer_mem, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer_mem);
	close_file(source);
	close_file(dest);

	return (0);
}
