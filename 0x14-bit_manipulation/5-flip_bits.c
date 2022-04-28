/**
 * flip_bits - Check number of changed bits
 * between two numbers
 *
 * @n: initial decimal
 * @m: final decimal
 * Return: number of bit flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int num;

	x = n ^ m;
	num = 0;

	while (x > 0)
	{
		if (x & 1)
			num++;
		x = x >> 1;
	}
	return (num);
}
