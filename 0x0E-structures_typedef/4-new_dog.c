#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 *_strcpy - funtion copies the string pointed by src
 * inclusive of terminating null byte \0
 * to the buffer pointed to by the destination
 * @dest: pointer to the buffer from which its copying the string
 * @src: string to be copied.
 *
 * Return: pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
/**
 * new_dog - function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog if Success, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
