#include "main.h"
#include <stdlib.h>
/**
 * argstostr - funtion to concatenate all arguments
 * @ac: input
 * @av: double pointed array
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int j, p;

	int s = 0;
	int m = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (p = 0; av[j][p]; p++)
			m++;
	}
	m += ac;

	string = malloc(sizeof(char) * m + 1);
	if (string == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (p = 0; av[j][p]; p++)
	{
		string[s] = av[j][p];
		s++;
	}
	if (string[s] == '\0')
	{
		string[s++] = '\n';
	}
	}
	return (string);
}
