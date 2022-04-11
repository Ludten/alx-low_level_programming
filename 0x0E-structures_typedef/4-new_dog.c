#include "dog.h"
#include <stddef.h>
#include <stdio.h>

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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return(NULL);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}