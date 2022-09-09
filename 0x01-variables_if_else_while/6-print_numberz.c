#include <stdio.h>

/**
* main -  main program
*
* Description: prints lower case letters a - z
*
* Return: 0 indicates success
*/
int main(void)
{
	int ch;


	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}

	printf("\n");
	return (0);
}
