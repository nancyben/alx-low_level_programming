#include <stdio.h>

/**
* main -  main program
* Print all combination of 3 digit numbers
* Return: 0 indicates success
*/
int main(void)
{
	int first;
	int last;

	int zfirst;
	int zlast;

	int zeroCounter = 0;
	int secondCounter = 1;
	int countEnd = 99;

	while (zeroCounter < countEnd)
	{
		first = secondCounter / 10;
		last  = secondCounter % 10;

		zfirst = zeroCounter / 10;
		zlast  = zeroCounter % 10;

		putchar(zfirst + '0');
		putchar(zlast + '0');
		putchar(' ');
		putchar(first + '0');
		putchar(last + '0');
		if (zeroCounter != countEnd - 1)
		{
			putchar(',');
			putchar(' ');
		}
		if (secondCounter >= countEnd)
		{
			zeroCounter = zeroCounter + 1;
			secondCounter = zeroCounter + 1;
		}
		else
		{
			secondCounter = secondCounter + 1;
		}
	}
	putchar('\n');
	return (0);
}
