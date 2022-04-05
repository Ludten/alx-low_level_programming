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
	int i;

	if (str == NULL)
	{
		return ("NULL");
	}
	else
	{
		ptr = malloc(sizeof(*str));

		if (ptr == NULL)
		{
			return ("NULL");
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
