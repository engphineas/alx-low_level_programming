#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - that prints the number of arguments
 * @argc: count of arguments
 * @argv: vector of the arguments
 * Return: product
 */
int main(int argc, char *argv[])
{
	int j;
	unsigned int k, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			s = argv[j];
			for (k = 0; k < strlen(s); k++)
			{
				if (s[k] < 48 || s[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}


