#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: the string denoted as destination
 * @src: source string
 * Return: pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j;

	while (dest[len])
	{
		len++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[len] = src[j];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
