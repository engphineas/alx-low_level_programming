#include "main.h"
#include <stdlib.h>
/**
 * _strdup - that duplicates a string.
 * @str: array size
 * Return: duplicated string.
 */
char *_strdup(char *str)
{
	int n = 0;
	int j = 1;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}

	a = malloc((sizeof(char) * j) + 1);
		if (a == NULL)
			return (NULL);
	while (n < j)
	{
		a[n] = str[n];
		n++;
	}
	a[n] = '\0';
	return (a);
}
