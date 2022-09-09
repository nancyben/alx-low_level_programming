#include <stdlib.h>
#include <time.h>

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

	char[] result = "";

	if (n == 0)
	{
		result = "0"
	}
	else if (n > 0)
	{
		result = "positive"
	}
	else
	{
		result = "negative"
	}
	printf("%d is %c", n, result);
	return (0);
}
