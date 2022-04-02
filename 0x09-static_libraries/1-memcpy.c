#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: memory operand
 *
 * @src: memory operand
 *
 * @n: argument operand
 *
 * Return: dest Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
