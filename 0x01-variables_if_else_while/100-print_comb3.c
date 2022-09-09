#include <stdio.h>

/**
* main -  main program
* Print numbers from 0 - 99
* Return: 0 indicates success
*/
int main(void)
{
	int rtc;
	int first;
	int last;

	for (rtc = 1; rtc <= 89; rtc++)
	{
		first = rtc / 10;
		last  = rtc % 10;

		if (first != last && last > first)
		{
			putchar(rtc / 10 + '0');
			putchar(rtc % 10 + '0');

			if (rtc < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
