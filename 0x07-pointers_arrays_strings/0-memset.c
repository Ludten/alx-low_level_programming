#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: buffer operand
 *
 * @b: argument operand
 *
 * @n: argument operand
 *
 * Return: s Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
