#include "main.h"

/**
 * _strcpy - copy string
 *
 * @dest: string operand
 *
 * @src: string operand
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest = src;

	return (dest);
}
