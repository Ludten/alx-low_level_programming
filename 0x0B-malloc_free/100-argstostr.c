#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string s
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}

/**
 * *argstostr - concatenate two arguments
 *
 * @ac: argument counter
 *
 * @av: argument vector
 *
 * Return: ptr or NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l += _strlen(av[i]);
	}
	l += (ac + 1);

	ptr = malloc(sizeof(char) * l);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}

	return (ptr);
}
