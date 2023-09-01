#include "main.h"
/**
 * _memcpy - a function to copy the memory area
 *@dest: detination  memory location where to store
 *@src: memory location where to copy from
 *@n: number of bytes
 *
 *Return: copied memory n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
