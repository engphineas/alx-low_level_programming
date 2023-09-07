#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function to concatenate string to another string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from string2 to concatenate to string1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int j = 0, k = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		string = malloc(sizeof(char) * (length1 + n + 1));
	else
		string = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!string)
		return (NULL);

	while (j < length1)
	{
		string[j] = s1[j];
		j++;
	}

	while (n < length2 && j < (length1 + n))
		string[j++] = s2[k++];

	while (n >= length2 && j < (length1 + length2))
		string[j++] = s2[k++];

	string[j] = '\0';

	return (string);
}

