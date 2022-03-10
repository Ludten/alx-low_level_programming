/**
 * main - print out the size of various types on the computer it is compiled and
 * run on.
 *  @intType: int operand
 * @floatType: float operand
 * @longintType: long int operand
 * @longlongintType: long long int operand
 * @charType: char operand
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	printf("Size of a char: %zu byte(s\)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s\)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s\)\n", sizeof(longintType));
	puts("Size of a long long int: %zu byte(s\)", sizeof(longlongintType));
	printf("Size of float: %zu byte(s\)\n", sizeof(floatType));

	return (0);
}
