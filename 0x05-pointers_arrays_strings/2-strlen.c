#include <stdio.h>
/**
 * _strlen - that returns the length of a string
 * @str: the string we obtain length of.
 * Return: length of string str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
