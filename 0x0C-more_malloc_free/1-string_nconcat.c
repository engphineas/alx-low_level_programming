#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: length of second string
 * Return: new string of concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, k = 0, l = 0, m = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;
	while (s2[l])
		l++;
	if (n >= l)
		m = j + l;
	else
		m = j + n;
	string = malloc(sizeof(char) * m + 1);
	if (string == NULL)
		return (NULL);
	k = 0;
	while (k <= m)
	{
		if (k <= j)
			string[k] = s1[k];
		if (k >= j)
		{
			string[k] = s2[l];
			k++;
		}
		k++;
	}
	string[k] = '\0';
	return (string);
}

