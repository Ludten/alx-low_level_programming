#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array with malloc
 *
 * @size: size of array
 *
 * @c: input string
 *
 * Return: ptr or NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(c));

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
			return (ptr);
		}
	}
}
