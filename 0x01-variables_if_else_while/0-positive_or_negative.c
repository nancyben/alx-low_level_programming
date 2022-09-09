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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is %s", n, "0");
	else if (n > 0)
		printf("%d is %s", n, "positive");
	else
		printf("%d is %s", n, "negative");

	return (0);
}
