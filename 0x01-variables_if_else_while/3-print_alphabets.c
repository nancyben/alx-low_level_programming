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

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	printf("\n");
	return (0);
}
