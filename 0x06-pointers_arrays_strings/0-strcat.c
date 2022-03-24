#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string operand
 *
 * @src: string operand
 *
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	for (i = 0; dest[i] != 0; i++)
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l + 1] = src[i];
		l++;
	}
	dest[i] = '\0';

	return (dest);
}
