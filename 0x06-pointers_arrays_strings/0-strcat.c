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
	int i = 0;
	int l = 0;

	while (dest[l] != '\0')
		l++;

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}

	dest[l] = '\0';

	return (dest);
}
