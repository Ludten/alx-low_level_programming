#include "main.h"

/**
 * swap_int - swap integers
 *
 * @a: pointer operand
 *
 * @b: pointer operand
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
