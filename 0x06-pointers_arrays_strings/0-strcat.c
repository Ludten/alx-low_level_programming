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
	int i, n1, n2;
	int l1, l2 = 0;

	for (i = 0; dest[i] != 0; i++)
	{
		l1++;
	}
	n1 = l1;

	for (i = 0; src[i] != 0; i++)
	{
		l2++;
	}
	n2 = l2;

	for (i = 0; i <= n2; i++)
	{
		dest[i + n1] = src[i];
	}

	return (dest);
}
