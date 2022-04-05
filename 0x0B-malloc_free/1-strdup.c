#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - duplicate a string
 *
 * @str: input string
 *
 * Return: ptr or NULL (Error)
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		l = 0;

		while (str[l])
			l++;

		ptr = malloc((l + 1) * sizeof(*str));

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; str[i] != '\0'; i++)
			{
				ptr[i] = str[i];
			}
			return (ptr);
		}
	}
}
