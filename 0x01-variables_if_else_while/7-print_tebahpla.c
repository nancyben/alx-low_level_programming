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
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	printf("\n");
	return (0);
}
