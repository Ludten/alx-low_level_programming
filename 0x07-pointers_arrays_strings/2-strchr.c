#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 *
 * @s: string operand
 *
 * @c: argument operand
 *
 * Return: s - 1 or NULL Success
 */

char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
