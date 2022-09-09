#include <stdio.h>

/**
 * putcharByPass - bypass number of usesable putchar which is 5
 *
 * val - char you want to print
 * Just want to use putchar any how I want :v
 *  Just for fun :v
 * Return: void
 */
void putcharByPass(char val)
{
	putchar(val);
}

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
		putcharByPass(rtc / 10 + '0');
		putcharByPass(rtc % 10 + '0');

		if (rtc < 99)
		{
			putcharByPass(',');
			putcharByPass(' ');
		}
	}

	putcharByPass('\n');
	return (0);
}
