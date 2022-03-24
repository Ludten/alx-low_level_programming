#include "main.h"

/**
 * _strncpy - copy string
 *
 * @dest: string operand
 *
 * @src: string operand
 *
 * @n: argument operand
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
