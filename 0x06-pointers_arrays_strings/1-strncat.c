#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: string to be appended to the destination
 * @n: number of bytes to be appended to dest from src
 * Return: pointer to the resulting string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int d_len = 0;

	while (dest[index++])
		d_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[d_len++] = src[index];
	return (dest);
}
