#include <stdio.h>

/**
* main -  main program
* Print numbers from 0 - 99
* Return: 0 indicates success
*/
int main(void)
{
	int rtc;

	for (rtc = 0; rtc <= 99; rtc++)
	{
		putchar(rtc / 10 + '0');
		putchar(rtc % 10 + '0');

		if (rtc < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
