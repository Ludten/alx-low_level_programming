#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string operand
 *
 * @src: string operand
 *
 * @n: argument operand
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[l] != '\0')
		l++;

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';

	return (dest);
}
