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

	if (s1 == NULL)
		*s1 = '\0';

	if (s2 == NULL)
		*s2 = '\0';

	n = 0;
	m = 0;

	while (s1[n])
		n++;

	while (s2[m])
		m++;

	ptr = malloc(((n + 1) * sizeof(*s1)) + ((m + 1) * sizeof(*s2)));

	if (ptr == NULL)
		return ("NULL");

	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (y = 0; s2[y] != '\0'; y++)
		{
			ptr[i] = s2[y];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
