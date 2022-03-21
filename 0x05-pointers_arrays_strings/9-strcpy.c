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
	*dest = *src;
	dest = src;

	return (dest);
}
