#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: NULL Failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	(*ptr).name = malloc(sizeof(char) * (l1 + 1));
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	(*ptr).owner = malloc(sizeof(char) * (l2 + 1));
	if ((*ptr).owner == NULL)
	{
		free(ptr);
		free((*ptr).name);
		return (NULL);
	}
	_strcpy((*ptr).name, name);
	_strcpy((*ptr).owner, owner);
	(*ptr).age = age;

	return (ptr);
}
