#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *src);

/**
 * new_dog - creates new dog structure
 * @name: name to assign to new strucutre
 * @age: age of new dog
 * @owner: owner assigned to new structure of dog
 * Return: Returns a newdog struct of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *dog_name;
	char *dog_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	dog_owner = _strcpy(owner);
	dog_name = _strcpy(name);
	if (dog_owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	if (dog_name == NULL)
	{
		free(dog_owner);
		free(newdog);
		return (NULL);
	}
	newdog->name = dog_name;
	newdog->age = age;
	newdog->owner = dog_owner;
	return (newdog);
}
/**
 * _strlen - gets length of string
 * @s: string passed
 * Return: returns length i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - takes string from src array and copies to dest
 * @src: array we copy
 * Return: Returns dest array, which is a copy of src
 */
char *_strcpy(char *src)
{
	int i, len;
	char *dest;

	len = _strlen(src);

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
