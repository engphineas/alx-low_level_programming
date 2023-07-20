#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its main
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (j = 0; j < num_bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
