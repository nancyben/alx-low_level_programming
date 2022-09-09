#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ltDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ltDigit = n % 10;

	if (ltDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ltDigit);
	else if (ltDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ltDigit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ltDigit);

	return (0);
}
