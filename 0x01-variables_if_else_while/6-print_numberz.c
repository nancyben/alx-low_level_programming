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
	int rtc;


	for (rtc = 0; rtc < 10; rtc++)
	{
		putchar(rtc + '0');
	}

	putchar('\n');
	return (0);
}
