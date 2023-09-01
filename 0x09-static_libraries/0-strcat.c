#include "main.h"
/**
 *   _strcat - program  concatenates two strings
 *   @dest: destinantion to the entered value
 *   @src: source from entered value
 *   Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
