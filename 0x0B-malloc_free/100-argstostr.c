#include "main.h"
#include <stdlib.h>

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
	char *ptr;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
	}

	ptr = malloc(sizeof(char) * l);

	if (ptr == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}

	return (ptr);
}
