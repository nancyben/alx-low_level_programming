#include <stdio.h>

/**
* main -  main program
* Print all combination of 3 digit numbers
* Return: 0 indicates success
*/
int main(void)
{
	int rtc;
	int first;
	int last;
	int mid;

	for (rtc = 10; rtc < 1000; rtc++)
	{
		first = rtc / 100;
		mid = (rtc / 10) % 10;
		last  = rtc % 10;

		if (
				(first != mid && first != last && first != last) &&
				(first < mid && first < last && mid < last)
		)
		{
			putchar(first + '0');
			putchar(mid + '0');
			putchar(last + '0');

			if (rtc < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
