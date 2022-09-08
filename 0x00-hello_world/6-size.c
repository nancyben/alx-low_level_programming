#include<stdio.h>
/**
 * main - entry point
 * Prints size of data types
 * for the particular compiler...
 *
 * Return: status(0)
 */
int main(void)
{
	int intType;

	char charType;

	long int longIntType;

	long long int longLongIntType;

	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
