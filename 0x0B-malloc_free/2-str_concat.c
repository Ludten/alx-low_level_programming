#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 *
 * @s1: input string
 *
 * @s2: input string
 *
 * Return: ptr or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, y, n, m;

	n = 0;
	m = 0;

	while (s1 && s1[n])
		n++;

	while (s2 && s2[m])
		m++;

	ptr = malloc(sizeof(char) * (n + m + 1));

	if (ptr == NULL)
		return ("NULL");

	else
	{
		for (i = 0; i < n; i++)
		{
			ptr[i] = s1[i];
		}
		for (y = 0; i < (n + m); y++)
		{
			ptr[i] = s2[y];
			i++;
		}

		ptr[i] = '\0';
		return (ptr);
	}
}
