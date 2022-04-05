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
	char *ptr[ac];
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			ptr[i] = malloc(2 * sizeof(**av));
		}

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; j < 1; j++)
				{
					ptr[i][j] = av[i];
				}
				ptr[i][j] = '\n';
			}
			return (ptr[ac]);
		}
	}
}
