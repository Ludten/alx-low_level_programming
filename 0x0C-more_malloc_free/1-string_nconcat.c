#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: string variable
 *
 * @s2: string variable
 *
 * @n: input variable
 *
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		ptr = malloc(sizeof(char) * (l1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!ptr)
		return (NULL);

	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		ptr[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
