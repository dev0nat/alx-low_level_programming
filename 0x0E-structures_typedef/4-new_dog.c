#include<stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - function prints length of a string.
 *
 * @s: holds our pointer char
 * Return: returns the length of *s
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	return (length);
}

/**
 * _strcpy - copies string from src to dest
 *
 * @dest: destination pointer
 * @src: source pointer
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new_dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns pup (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	int nLen,oLen;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	nLen = _strlen(name);
	oLen = _strlen(owner);

	pup->name = malloc(sizeof(char) * (nLen + 1));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->owner = malloc(sizeof(char) * (oLen + 1));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}

	pup->name = _strcpy(pup->name, name);
	pup->age = age;
	pup->owner = _strcpy(pup->owner, owner);

	return (pup);
}
