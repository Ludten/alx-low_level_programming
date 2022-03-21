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
	int i, n;
	int l = 0;

	for (i = 0; src[i] != 0; i++)
	{
		l++;
	}
	n = l;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}

	dest = src;

	return (dest);
}
